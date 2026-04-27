#include <stdio.h>
#include <math.h> 

int main() {
    int opcion;
    float grados, radianes;

    const float PI = 3.14159265;


    printf("**********************************************\n");
    printf("* CALCULADORA FUNCIONES TRIGONOMETRICAS BASICAS *\n");
    printf("**********************************************\n");
    printf("* Lista de funciones trigonometricas         *\n");
    printf("* 1- Seno                                   *\n");
    printf("* 2- Coseno                                 *\n");
    printf("* 3- Tangente                               *\n");
    printf("**********************************************\n");

    printf("Seleccione una opcion (1-3): ");
    scanf("%d", &opcion);

    if (opcion >= 1 && opcion <= 3) {
        printf("Ingrese el angulo en grados: ");
        scanf("%f", &grados);

        
        radianes = grados * (PI / 180.0);

        printf("\nRESULTADO:\n");

        switch (opcion) {
            case 1:
                printf("El Seno de %.2f grados es: %.4f\n", grados, sin(radianes));
                break;
            case 2:
                printf("El Coseno de %.2f grados es: %.4f\n", grados, cos(radianes));
                break;
            case 3:
                
                if ((int)grados % 180 == 90 || (int)grados % 180 == -90) {
                    printf("Error: La tangente para %.2f grados es indefinida.\n", grados);
                } else {
                    printf("La Tangente de %.2f grados es: %.4f\n", grados, tan(radianes));
                }
                break;
        }
    } else {
        printf("Error: Opcion no valida.\n");
    }

    return 0;
}