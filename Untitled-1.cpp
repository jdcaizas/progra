
#include <stdio.h>
#include <math.h>

float MontoMensual(float monto, float tasaanual, int meses) {
    float tasamensual = tasaanual / 12 / 100; 
    float mestotal = (monto * tasamensual) / (1 - (1 + tasamensual, -meses)); 
    return mestotal;
}

int main() {
    float monto, tasaanual;
    int mesesInicio, mesesFin;
    

    printf("Ingrese el monto mensual: ");
    scanf("%f", &monto);
    printf("Ingrese la tasa de interes anual: ");
    scanf("%f", &tasaanual);
    printf("Ingrese la cantidad de meses inicial: ");
    scanf("%d", &mesesInicio);
    printf("Ingrese la cantidad de meses final: ");
    scanf("%d", &mesesFin);
    

    printf("Monto Mensual:\n");
    printf("--------------\n");
    for (int i = mesesInicio; i <= mesesFin; i++) {
        float mensual = MontoMensual(monto, tasaanual, i);
        printf("Meses: %d - Pago Mensual: %.2f\n", i, mensual);
    }
    
    return 0;
}

  