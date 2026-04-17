#include <stdio.h>
int main (){
    char letra;
    printf("Ingrese un caracter:");
    scanf(" %c", &letra);

    if (letra == 'A' || letra == 'a'){
        printf("%c es una vocal", letra);
    }else if (letra == 'E' || letra =='e'){
        printf("%c es una vocal", letra);
    }else if (letra == 'I' || letra == 'i'){
        printf("%c es una vocal", letra);
    }else if (letra == 'O' || letra == 'o'){
        printf("%c es una vocal", letra);
    }else if (letra == 'U' || letra == 'u'){
        printf("%c es una vocal", letra);
    }else{
        printf("%c No es una vocal");
    }
return 0;
}