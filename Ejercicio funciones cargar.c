#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 3

/*Cargar 22, 33 y 44. Ejercicio ordenamiento de arrays*/

void CargarNumerosTest(int array[], int tam);
void MostrarNumeros(int array[], int tam);
void CargarPalabrasTest(char array[][40], int tam);
void MostrarPalabras(char array[][40], int tam);

int main()
{
    int DatosNumericos[T];
    //char letra;
    //char palabra[T];
    char ListadoDePalabras[T][40];

    CargarNumerosTest(DatosNumericos, T);
    MostrarNumeros(DatosNumericos, T);

    CargarPalabrasTest(ListadoDePalabras, T);
    MostrarPalabras(ListadoDePalabras, T);



    return 0;
}

void CargarNumerosTest(int array[], int tam){
    int auxInt[] = {22,33,44} ;
    int i;

    for(i=0; i<tam; i++){
        array[i] = auxInt[i];
    }
}

void MostrarNumeros(int array[], int tam){
    int i;

    for(i=0; i<tam; i++){
        printf("%d \n" , array[i]);
    }
}

void CargarPalabrasTest(char array[][40], int tam){
    char auxChar[][40] = {"Eliana", "Lucia","Mariano"};
    int i;

    for(i=0; i<tam; i++){
        strcpy(array[i], auxChar[i]);
    }
}

void MostrarPalabras(char array[][40], int tam){
    int i;

    for(i=0; i<tam; i++){
        printf("%s \n" , array[i]);
    }
}
