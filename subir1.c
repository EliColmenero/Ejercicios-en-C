#include <stdio.h>
#include <stdlib.h>

int getIntRange(char*, char*, int , int);

int main()
{
    printf("%d" ,getIntRange("Ingrese una nota ", "Error. Ingrese una nota valida " , 0, 10, 3, -1)); //Entre 0 y 10 es el rango

    return 0;
}
int getIntRange(char* mensaje, char* mensjeError, int min, int max, int intentos, int retornoError){

    int numero;
    int intentos;
    int retornoError = -1;

    printf("%s" ,mensaje);
    scanf("%d" ,&numero);

    while(numero < min || numero > max){
        printf("%s", mensajeError);
        scanf("%d", &numero);

        intentos++;
        if(intentos > 2){
            printf("%d" ,&retornoError);
        }
        break;
    }

    return numero;
}
