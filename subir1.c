#include <stdio.h>
#include <stdlib.h>

/*Leer 5 numeros enteros positivos.
  Indicar cuál es el mayor.
  Indicar en qué órden fue leído (a que elemento del indice pertenece).
  Mostrar el vector completo.
*/

int main()
{
    int numeros[5];
    int mayor;
    int flag = 0;


    for(int i = 0; i < 5; i++){
        printf("Ingrese un numero positivo \n");
        scanf("%d" ,&numeros[i]);

    while(numeros[i] <= 0){
        printf("\nIngrese un numero valido. Debe ser positivo\n");
        scanf("%d" ,&numeros[i]);
    }

    }

    //Salgo y pongo otro for para buscar el numero mayor

    for(int i = 0; i < 5; i++){
        if((numeros[i] > mayor) || flag == 0){
            mayor = numeros[i];
            flag = 1;
        }
    }

    //Si encuentro el numero, muestro el indice para indicar la posicion en la que se encuentra

    printf("El numero mayor es %d \n" ,numeros[i]);

    for(int = 0; i < 5; i++){
        if(numeros[i] == mayor){
            printf("%d" ,i);
        }
    }


    return 0;
}
