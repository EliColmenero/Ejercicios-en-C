#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int maximo = 0;
    int contador = 0;
    int i;


    for(i = 0; i < 5; i++){
        printf("Ingrese un numero \n");
        scanf("%d", &numeros[i]);

    }

    printf("Los numeros ingresados son %d \n" ,&numeros[i]);


    for(i = 0; i < 5; i++){
        if(numeros[i] > maximo || contador == 0){
            maximo = numeros[i];
            contador = 1;
    }
    }

    printf("El numero mayor es %d " ,&numeros[i]);

    for(i = 0; i < 5; i++){
        if(numeros[i] == maximo){
            printf("La posicion del numero que es mayor es %d \n" ,i);
        }
    }


    return 0;
}
