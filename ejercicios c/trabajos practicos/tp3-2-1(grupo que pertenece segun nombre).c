#include <stdio.h>
int main(){
    char nombre [40];
    char sexo;

    printf("ingrese su nombre:");
    scanf(" %s", nombre);

    printf("ingrese su sexo (M=Mujer / H=Hombre):");
    scanf(" %c", &sexo);

    if (sexo == 'M'||sexo == 'm'){
        if (nombre[0] < 'M' ){
            printf("Pertenece al GRUPO A.\n");
        }
        else{
            printf("Pertenece al GRUPO B.\n");
        }
    }
    else if (sexo == 'H'|| sexo == 'h'){
        if (nombre[0]>'N'){
            printf("Pertenece al GRUPO A.\n");
        }
        else{
            printf("Pertenece al GRUPO B.\n");
        } 
    }
    else{
        printf ("Error: sexo invalido. Ingrese M o H.\n");
    }
}