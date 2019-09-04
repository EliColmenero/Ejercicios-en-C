#include <stdio.h>
#include <stdlib.h>

//Arrays
//Leer 10 elementos de un vector de enteros y mostrar su contenido

int main()
{
    int numeros[10] = {2, 5, 8, 4, 6, 9, 42, 20, 86, 1};

    for(int i = 0; i<10; i++){
        printf("%d \n" ,numeros[i]);
    }



    return 0;
}
