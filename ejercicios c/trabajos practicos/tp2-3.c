#include <stdio.h>
int main() {
/************************************************/
/* Objetivo: Leer un caracter, un entero,       */
/*           un real y un real en doble         */
/*           precision desde la                 */
/*           Entrada Estandar y mostrarlos por  */
/*           la Salida Estandar                 */
/* Entrada:  Un caracter, un entero, un real    */
/*           un real doble.                     */
/* Salida:   Mostrarlos por pantalla            */
/************************************************/
char   caracter;
int    entero;
float  real;
double real_doble;

printf("Ingrese un caracter: ");
scanf("%c", &caracter);
printf("Ingrese un entero: ");
scanf("%d", &entero);

printf("Ingrese un real (float): ");
scanf("%f", &real);
printf("Ingrese un real doble (double): ");
scanf("%lf", &real_doble);

printf("\n=== Valores ingresados ===\n");
printf("Caracter  : %c\n",  caracter);
printf("Entero    : %d\n",  entero);
printf("Real      : %f\n",  real);    
printf("Real doble: %lf\n", real_doble);
return 0;
}