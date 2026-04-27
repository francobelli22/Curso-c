#include <stdio.h>

int main() {
    int kg;
    int pesca;
    int suma;
    suma=0;
    kg= 10;
    pesca=0;
    printf ("el maximo de kg es %d\n", kg);
    while (suma< kg){
        printf("ingrese el peso\n");
        scanf("%d", &pesca);
        suma = suma+pesca;
    } if (suma >= kg){
        printf("exceso de peso");
    }


    return 0;
}