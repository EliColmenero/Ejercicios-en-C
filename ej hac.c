#include <stdio.h>
#include <stdlib.h>

int buscarNumero(int vec[], int tam, int numero);
int main()
{
    int numeros[]= {23, 56, 43, 21, 67, 98, 45, 11, 62, 10};
    int esta;

    if(esta){
        printf("esta \n");
    } else {
        printf("No esta \n");
    }

    return 0;
}

int buscarNumero(int vec[], int tam. int numero){

int esta = 0;

    for(int i = 0; i < tam; i++){
        if(numero == vec[i]){
            esta = 1;
            break; //Para que no siga buscando una vez que encontro el numero
        }
    }
    return esta;

}
