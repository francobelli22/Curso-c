#include <stdio.h>
/********************************************************/
/* Objetivo: Menu que permite ejecutar 3 opciones:      */
/*           1. Indicar si un numero es par o impar     */
/*           2. Calcular la edad de una persona         */
/*           3. Indicar si un numero es divisible por 3 */
/* Entrada:  Opcion del menu y datos de cada ejercicio  */
/* Salida:   Resultado segun la opcion elegida          */
/********************************************************/
int main() {
    int opcion;
    int numero;
    int Dia, Mes, Anio;
    int DiaN, MesN, AnioN;
    int edad;

    printf("╔══════════════════════════════╗\n");
    printf("║           MENU               ║\n");
    printf("╠══════════════════════════════╣\n");
    printf("║  1. Par o Impar              ║\n");
    printf("║  2. Calcular Edad            ║\n");
    printf("║  3. Divisible por 3          ║\n");
    printf("╚══════════════════════════════╝\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {

        printf("\n── Par o Impar ──\n");
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
            printf("%d es PAR.\n", numero);
        else
            printf("%d es IMPAR.\n", numero);

    }

    if (opcion == 2) {

        printf ("Este programa calcula la edad del usuario");
        printf("Ingrese Dia/Mes/Anio de nacimiento\n");
        printf ("numero del dia en el que nacio:");
        scanf ("%d", &DiaN);
        printf ("\nIngrese el numero del mes en el que nacio:");
        scanf ("%d", &MesN);
        printf ("\nIngrese anio en el que nacio:");
        scanf ("%d", &AnioN);

        printf("Ingrese Dia/Mes/Anio de actual\n");
        printf ("numero del dia de hoy:");
        scanf ("%d", &Dia);
        printf ("\nIngrese el numero de mes actual:");
        scanf ("%d", &Mes);
        printf ("\nIngrese anio actual:");
        scanf ("%d", &Anio);

        edad = Anio - AnioN;

        if (Mes< MesN){
        edad = edad- 1;
        }
        else{
        if (Mes=Mes, Dia<DiaN) {
        edad = edad- 1;
        }
        }
        printf ("La edad del usuario es %d", edad);
    }

    if (opcion == 3) {

        printf("\n── Divisible por 3 ──\n");
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        if (numero % 3 == 0)
            printf("%d ES divisible por 3.\n", numero);
        else
            printf("%d NO es divisible por 3.\n", numero);
    }

    if (opcion != 1 && opcion != 2 && opcion != 3)
        printf("\nError: opcion invalida.\n");

    return 0;
}