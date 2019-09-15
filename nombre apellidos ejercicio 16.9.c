#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

void cargarNombre(char vec[20], int tam);
void cargarApellido(char vec[20], int tam);
void Completo(char vec[], int tam);

int main()
{
    char nombre[TAM][20];
    char apellido[TAM][20];
    char nombreCompleto[TAM][41]; //Porque son 19 de cada uno, 1 por la coma y 1 por el \n


    cargarNombre(nombre, TAM);
    cargarApellido(apellido, TAM);
    Completo(nombreCompleto, TAM);




    return 0;
}

void cargarNombre(char vec[], int tam){
    int i;
    char auxNom[] = {"Eliana"};

    for(i=0; i<tam; i++){
    //printf("Ingrese el nombre \n");
    strcpy(vec[i], auxNom[i]);
    }
}
void cargarApellido(char vec[], int tam){
    int i;
    char auxAp[] = {"Colmenero"};

    for(i=0; i<tam; i++){
        strcpy(vec[i], auxAp[i]);
    }
}
void Completo(char vec[], int tam){
    int i;
    char auxComp[] = {"Colmenero", ", Eliana"};

    for(i=0; i<tam; i++){
        strcat()
    }
}
