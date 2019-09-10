#include <stdio.h>
#include <stdlib.h>

//Ejercicio, si es 0 que sea descend. y si es 1 asc

void MostrarVector(int vec, int TAM);

int main()
{
    int i;
    int j;
    int aux;
    int vec[TAM] = {1, 2 , 5, 8};

    MostrarVector(int vec, int TAM);

    //Orden ascendente (con 0)

    for(i = 0; i < TAM - 1; i++){
        for(j = i +1;j < TAM; j++){
            if(vec[i] > vec[j]){ //Dependiendo de lo que le ponga aca de signo va a ser ascendente o descendente
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }

    //Con 1 descendente

    for(i = 0; i < TAM - 1; i++){
        for(j = i +1;j > TAM; j++){
            if(vec[i] > vec[j]){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }

    return 0;
}

void MostrarVector(vec, TAM){
    int TAM;


    printf("%d " ,vec[TAM]);

}
