#include <stdio.h>

int main() {
    int opcion;
    float dinero;

    // Menú de opciones
    printf("=== DESTINOS DE VIAJE ===\n");
    printf("1. Tacopozo ($40000)\n");
    printf("2. Villa Angela ($35000)\n");
    printf("3. Castelli ($40500)\n");
    printf("4. San Martin ($25000)\n");
    printf("Seleccione un destino: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Elegiste Tacopozo. Precio: $40000\n");
            break;
        case 2:
            printf("Elegiste Villa Angela. Precio: $35000\n");
            break;
        case 3:
            printf("Elegiste Castelli. Precio: $40500\n");
            break;
        case 4:
            printf("Elegiste San Martin. Precio: $25000\n");
            break;
        default:
            printf("Opcion invalida\n");
    }

    printf("\nIngrese el dinero disponible: ");
    scanf("%f", &dinero);

    
    if(dinero >= 40500) {
        printf("Puede viajar hasta Castelli (el mas lejano)\n");
    } else if(dinero >= 40000) {
        printf("Puede viajar hasta Tacopozo\n");
    } else if(dinero >= 35000) {
        printf("Puede viajar hasta Villa Angela\n");
    } else if(dinero >= 25000) {
        printf("Puede viajar hasta San Martin\n");
    } else {
        printf("No le alcanza para viajar\n");
    }

    return 0;
}