#include <stdio.h>

int main() {
    int matriz[2][2] = {{1,2},{3,4}};
    int fila, col, nuevo;

    printf("Fila: ");
    scanf("%d", &fila);

    printf("Columna: ");
    scanf("%d", &col);

    printf("Nuevo valor: ");
    scanf("%d", &nuevo);

    matriz[fila][col] = nuevo;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}