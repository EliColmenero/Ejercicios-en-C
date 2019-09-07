#include <stdio.h>
#include <stdlib.h>

void MostrarVectorInt(int vec[], int tam);
int obtenerMayor(int vec[], int tam);
void mostrarIndices(int vec[], int );

int main()
{
    int numeros[];
    int maximo = 0;
    int contador = 0;
    int i;


    for(i = 0; i < 5; i++){
        printf("Ingrese un numero \n");
        scanf("%d", &numeros[i]);

    }

    MostrarVectorInt(numeros[i], 5);


    for(i = 0; i < 5; i++){
        if(numeros[i] > maximo || contador == 0){
            maximo = numeros[i];
            contador = 1;
    }
    }

    printf("El numero mayor es %d " ,numeros[i]);

    for(i = 0; i < 5; i++){
        if(numeros[i] == maximo){
            printf("La posicion del numero que es mayor es %d \n" ,&i);
        }
    }


    return 0;
}

void MostrarVectorInt( int vec[], int tam){

    for (int i = 0; i < tam; i++){
        printf("%d", vec[i]);
    }
}

int obtenerMayor(int vec[], int tam){

}
