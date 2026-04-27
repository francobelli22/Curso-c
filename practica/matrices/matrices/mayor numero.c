#include <stdio.h>

int main() {
    int matriz[2][2], mayor;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("ingrese numero ");
            scanf("%d", &matriz[i][j]);
        }
    }

    mayor = matriz[0][0];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }

    printf("Mayor: %d", mayor);

    return 0;
}