#include <stdio.h>

int main () {
    int edad;

    printf("Hola, bienvenido al programa!!!! \n");
    printf("Ingresa tu edad: ");
    scanf("%f", &edad);

    if(edad>=18){
        printf("\nEres mayor de edad");
    
    }
    else {
        printf("\nAun no eres mayor de edad");
    }

    return 0;
}