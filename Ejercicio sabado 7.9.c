#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3

//Vectores
/* Crear miArray[cantidad]   miArray es la direccion de memoria ram, [cantidad] son los lugares que se va a correr
Asignar miArray[indice]
Traer printf("%d" miArray[indice] */

void mostrarUnArray(int parametroArray[],int cant);
void inicializarUnArray(int parametroArray[],int cant);
void cargaSecuencialUnArray(int parametroArray[],int cant);
int dameElMaximo(int parametroArray[],int cant);
int dameElIndiceMaximo(int parametroArray[],int cant);

int main()
{
    int miArray[CANTIDAD];

    inicializarUnArray(miArray,CANTIDAD);

    cargaSecuencialUnArray(miArray,CANTIDAD);

    mostrarUnArray(miArray,CANTIDAD);

    //inicializarUnArray(miArray,CANTIDAD);

    dameElMaximo(miArray,CANTIDAD);

    dameElIndiceMaximo(miArray,CANTIDAD);


    return 0;
}

void mostrarUnArray(int parametroArray[],int cant){
    int indice;

    for(indice = 0; indice < cant; indice++){
        printf("\n numero: %d \n" ,parametroArray[indice]);
    }

}

void inicializarUnArray(int parametroArray[],int cant){
    int indice;

        for(indice = 0; indice < cant; indice++){
            parametroArray[indice] = 0;
    }
}

void cargaSecuencialUnArray(int parametroArray[],int cant){
    int indice;

     for(indice = 0; indice < cant; indice++){
        printf("\n Ingrese un numero \n");
        scanf("%d" ,&parametroArray[indice]);
    }
}

int dameElMaximo(int parametroArray[],int cant){
    int indice;
    int maximo;

    for(indice = 0; indice < cant; indice++)
        {
        if(parametroArray[indice] > maximo || indice == 0){
            maximo = parametroArray[indice];

        }
        }
    printf("\n El maximo es: %d \n", maximo);

    return maximo;
}

int dameElIndiceMaximo(int parametroArray[],int cant){
    int indice;
    int indiceMaximo;
    int maximo;

    for(indice = 0; indice < cant; indice++)
        {
        if(parametroArray[indice] > maximo || indice == 0){
            maximo = parametroArray[indice];
            indiceMaximo = indice;
        }
        }

        printf("\n El indice del maximo es: %d \n", indiceMaximo);


    return indiceMaximo;
}

/* int dameElIndiceMaximo(int parametroArray[],int cant){
    int indice;
    int maximo;
    maximo = dameElMaximo(int parametroArray,int cant);

    for(indice = 0; indice < cant; indice++)
        {
        if(parametroArray[indice] > maximo || indice == 0){
            maximo = parametroArray[indice];
            indiceMaximo = indice;
        }
        }

        printf("\n El indice del maximo es: %d \n", indiceMaximo);


    return indiceMaximo;
}
*/
