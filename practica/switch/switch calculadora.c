#include <stdio.h>

int main() {
    int opcion;
    int n1;
    int n2;

    // Menú de opciones
    printf("=== operaciones ===\n");
    printf("1. sumar\n");
    printf("2. multiplicar\n");
    printf("3. restar\n");
    printf("4. dividir\n");
    printf("Seleccione una operacion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Elegiste sumar\n");
            break;
        case 2:
            printf("Elegiste multiplicar\n");
            break;
        case 3:
            printf("Elegiste restar\n");
            break;
        case 4:
            printf("Elegiste dividir\n");
            break;
        default:
            printf("Opcion invalida\n");
    }

    printf("\nIngrese el primer numero: ");
    scanf("%d", &n1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &n2);
     if (opcion ==1){
        printf ("el resultado es %d", n1+n2);
     } else if (opcion ==2){
        printf ("el resultado es %d", n1*n2);
     } else if (opcion ==3 ){
        printf ("el resultado es %d", n1-n2);
     } else if (opcion ==4){
        if (n1>n2){
        printf ("el resultado es %d", n1/n2);
       } else printf ("el resultado es %d", n2/n1);
     }

    
    

    return 0;
}