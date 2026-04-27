#include <stdio.h>

int main() {
    int num;
    int suma = 0;
    int i = 1; 
    printf("Ingrese un numero: ");
    scanf("%d", &num);

  
    while (i <= num / 2) {
        if (num % i == 0) {
            suma = suma + i;
        }
        i++;
    }

    if (suma == num && num != 0) {
        printf("El numero %d es perfecto\n", num);
    } else {
        printf("El numero %d no es un numero perfecto\n", num);
    }

    return 0;
}