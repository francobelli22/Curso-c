#include <stdio.h>
/* Se desea obtener una tabla con las depreciaciones acumuladas y los valores reales de cada año, de un automóvil comprado por 20.000.000 pesos en el año 2023. durante los seis años siguientes suponiendo un valor de recuperación o rescate de 2.000. Realizar el análisis del problema, conociendo la fórmula de la depreciación anual constante D para cada año de vida útil. */
int main() {
float costo_inicial, valor_rescate;
int vida_util;
int anio_compra;
int i;
float depreciacion_anual, deprecion_acumulada, valor_real;

printf ("ingrese el costo inicial:");
scanf ("%f", &costo_inicial);

printf ("ingrese el valor de rescate");
scanf ("%f", &valor_rescate);

printf ("ingrese los años de vida util");
scanf ("%d", &vida_util);

printf("Ingrese el año de compra");
scanf ("%d", &anio_compra);

if (vida_util <= 0){
    printf ("\n La vida util debe ser mayor a 0.\n");
    return 1;
}
if (valor_rescate >= costo_inicial){
    printf ("\n El valor de rescate debe ser menos al costo incial\n");
    return 1;
}
depreciacion_anual = (costo_inicial - valor_rescate)/ vida_util; //calcula depreciacion

printf("  +------+----------+-----------------+-----------------+-----------------+\n");
printf("  | Año  | Periodo  |   Dep. Anual    |  Dep. Acumulada |   Valor Real    |\n");
printf("  +------+----------+-----------------+-----------------+-----------------+\n");
printf("  |  %4d|  Inicio  |        ---      |   $%11.2f    |   $%11.2f       |\n", anio_compra, 0.0, costo_inicial);
printf("  +------+-----------+----------------+-----------------+-----------------+\n");

for (i=1; i <=vida_util; i++){
    deprecion_acumulada = depreciacion_anual * i;
    valor_real= costo_inicial - deprecion_acumulada;
printf (" |  %4d|  año  %2d|    $%13.2f      |    $%11.2f   |$%11.2f|\n",anio_compra + i, i, depreciacion_anual, deprecion_acumulada, valor_real);
}
printf("  +------+----------+-----------------+-----------------+-----------------+\n");
printf("\n  Valor real al final: $%.2f\n\n", valor_real);
return 0;
}