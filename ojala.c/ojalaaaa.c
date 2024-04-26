#include <stdio.h>
#include <math.h> // Para la función pow()

int main() {
    int meses;
    float interes = 0.00583; // Tasa de interés mensual

    printf("Ingrese el número de meses: ");
    scanf("%d", &meses);

    float valores[meses + 1]; // Arreglo para almacenar los valores

    // Inicialización del arreglo con valores en cero
    for (int i = 0; i <= meses; i++) {
        valores[i] = 0;
    }

    // Ingreso de valores para cada mes
    for (int i = 1; i <= meses; i++) {
        printf("Ingrese el valor para el mes %d: ", i);
        scanf("%f", &valores[i]);
    }

    // Cálculo de valores con el interés usando la función pow()
    for (int i = 1; i <= meses; i++) {
        valores[i] *= pow(1 + interes, 1);
    }

    // Imprimir la tabla en columnas
    printf("\nMes\tValor inicial\tValor con interés\n");
    printf("--------------------------------------\n");
    for (int i = 1; i <= meses; i++) {
        printf("%d\t%.2f\t\t%.2f\n", i, valores[i] / (1 + interes), valores[i]);
    }

    return 0;
}
