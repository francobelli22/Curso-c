#include <stdio.h>
//Hacer un programa con las siguientes operaciones 
int main() {
int a=1, b=4, c=-5;
double d, e, x1, x2;

d = b*b - 4*a*c;
e = sqrt(d);
x1 = (-b + e) / (2*a);
x2 = (-b -e)/ (2*a);

printf("d = %.2f\n", d);
printf("e = %.2f\n", e);
printf("x1 = %.2f\n", x1);
printf("x2 = %.2f\n", x2);
 
return 0;
}