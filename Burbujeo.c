#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3

void mostrarUnArray(int parametroArray[],int cant);
void inicializarUnArray(int parametroArray[],int cant,int inicializacion);
void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[]);
int dameElMaximo(int parametroArray[],int cant);
int dameElIndiceMaximo(int parametroArray[],int cant);
void ordenarDesc(int parametroArray[], int cant);
//void ordenarAsc(int parametroArray[], int cant);

int main()
{
    int miArray[CANTIDAD];

    inicializarUnArray(miArray,CANTIDAD, -1);

    cargaSecuencialUnArray(miArray,CANTIDAD,"Ingrese su edad");

    cargaSecuencialUnArray(miArray,CANTIDAD,"Ingrese su altura");

    mostrarUnArray(miArray,CANTIDAD);

    ordenarDesc(miArray,CANTIDAD);

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

void inicializarUnArray(int parametroArray[],int cant,int inicializacion){
    int indice;

        for(indice = 0; indice < cant; indice++){
            parametroArray[indice] = inicializacion;
    }
}

void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[]){
    int indice;

     for(indice = 0; indice < cant; indice++){
        printf("\n %s" ,mensaje);
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

void ordenarDesc(int parametroArray[], int cant){
    int indice;
    int Siguiente;
    int aux;

    for(indice = 0; indice < cant; indice++){
        for(Siguiente = indice + 1; Siguiente < cant; Siguiente++){
            //Primero guardo uno de los dos valores
            if(parametroArray[indice] > parametroArray[Siguiente]){
                    //El siguiente seria la j
                aux = parametroArray[indice];
                parametroArray[indice] = parametroArray[Siguiente];
                parametroArray[Siguiente] = aux;
            }
        }
    }
}

/*void ordenarAsc(int parametroArray[], int cant){

} */
