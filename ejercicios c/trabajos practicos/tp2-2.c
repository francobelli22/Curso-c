#include <stdio.h>
#include <time.h>

int main() {

    int dia_nac, mes_nac, anio_nac;
    int dia_act, mes_act, anio_act;
    int edad;

    /* ── Obtener fecha actual del sistema ── */
    time_t t = time(NULL);
    struct tm *hoy = localtime(&t);

    dia_act  = hoy->tm_mday;
    mes_act  = hoy->tm_mon + 1;   /* tm_mon va de 0 a 11 */
    anio_act = hoy->tm_year + 1900; /* tm_year cuenta desde 1900 */

    /* ── Entrada ── */
    printf("=== Calculadora de Edad ===\n\n");
    printf("Ingrese su fecha de nacimiento:\n");

    printf("  Dia   (1-31): ");
    scanf("%d", &dia_nac);

    printf("  Mes   (1-12): ");
    scanf("%d", &mes_nac);

    printf("  Anio        : ");
    scanf("%d", &anio_nac);

    /* ── Validacion basica ── */
    if (dia_nac  < 1 || dia_nac  > 31 ||
        mes_nac  < 1 || mes_nac  > 12 ||
        anio_nac < 1) {
        printf("\nError: fecha de nacimiento invalida.\n");
        return 1;
    }

    if ((anio_nac > anio_act) ||
        (anio_nac == anio_act && mes_nac > mes_act) ||
        (anio_nac == anio_act && mes_nac == mes_act && dia_nac > dia_act)) {
        printf("\nError: la fecha de nacimiento no puede ser posterior a hoy.\n");
        return 1;
    }

    /* ── Calculo de edad ── */
    edad = anio_act - anio_nac;

    /* Si el cumpleanos de este anio todavia no llego, se resta 1 */
    if ((mes_act < mes_nac) ||
        (mes_act == mes_nac && dia_act < dia_nac)) {
        edad--;
    }

    /* ── Salida ── */
    printf("\nFecha actual      : %02d/%02d/%04d\n", dia_act, mes_act, anio_act);
    printf("Fecha nacimiento  : %02d/%02d/%04d\n", dia_nac, mes_nac, anio_nac);
    printf("----------------------------\n");
    printf("Edad              : %d anios\n", edad);

    return 0;
}