#include <stdio.h>

int main() {
    int matriz[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Filas
    for(int i = 0; i < 2; i++) {
        int suma = 0;
        for(int j = 0; j < 2; j++) {
            suma += matriz[i][j];
        }
        printf("Fila %d: %d\n", i, suma);
    }

    // Columnas
    for(int j = 0; j < 2; j++) {
        int suma = 0;
        for(int i = 0; i < 2; i++) {
            suma += matriz[i][j];
        }
        printf("Columna %d: %d\n", j, suma);
    }

    return 0;
}