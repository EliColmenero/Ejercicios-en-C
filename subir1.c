#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int suma = 0;
    int i;

    for(i = 0; i < 5; i++){
        printf("Ingrese un numero: \n");
        scanf("%d" ,&numeros[i]);
    }

    for(i = 0; i < 5; i++){
        suma += numeros[i];
    }


    printf("La suma es: %d \n" ,suma);


    return 0;
}
