#include <stdio.h>
//Calcular la edad de una persona 
int main() {
int DiaN, MesN, AnioN;
int Dia, Mes, Anio;
int edad;

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

return 0;
}