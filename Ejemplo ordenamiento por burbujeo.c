#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANTIDAD 4

void cargarEdadesTest(int array[], int cantidad);
void cargarNombresTest(char array[][50], int cantidad);
void cargarApellidoTest(char array[][50], int cantidad);
void ordenarPorEdad(char nombres[][50], char apellidos[][50], int edades[], int tam);
void mostrarPersonas(char nombres[][50], char apellidos[][50], int edades[], int tam);

int main()
{
    char nombres[CANTIDAD][50];
    char apellidos[CANTIDAD][50];
    int edades[CANTIDAD];

    cargarNombresTest(nombres, CANTIDAD);

    cargarApellidoTest(apellidos, CANTIDAD);

    cargarEdadesTest(edades, CANTIDAD);

    mostrarPersonas(nombres, apellidos, edades, CANTIDAD);

    ordenarPorEdad(nombres, apellidos, edades, CANTIDAD);

    mostrarPersonas(nombres, apellidos, edades, CANTIDAD);

    return 0;
}

void cargarNombresTest(char array[][50], int cantidad){
    char auxChar[][50] = {"Alfredo","Rogelio","Julieta","Pablo"};

    int i;

    for(i=0; i<cantidad; i++){
        strcpy(array[i], auxChar[i]);
    }
}

void cargarApellidoTest(char array[][50], int cantidad){
    char auxChar[][50] = {"Mercurio", "agua", "Roberto", "McCartney"};
    int i;

    for(i=0;i<cantidad;i++){
        strcpy(array[i], auxChar[i]);
    }
}

void cargarEdadesTest(int array[], int cantidad){
    int aux[] = {22, 33, 18, 55};
    int i;

    for(i=0; i<cantidad;i++){
        array[i]=aux[i];
    }
}


void ordenarPorEdad(char nombres[][50], char apellidos[][50], int edades[], int tam){
    int i;
    int j;
    char auxNombre[20];
    char auxAp[20];
    int auxEdad;

    for(i=0; i<tam -1 ; i++){
        for(j=i+1; j<tam; j++){
            if(edades[i] > edades[j]){

                strcpy(auxNombre, nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j], auxNombre);

                strcpy(auxAp, apellidos[i]);
                strcpy(apellidos[i], apellidos[j]);
                strcpy(apellidos[j], auxAp);

                auxEdad = edades[i];
                edades[i] = edades[j];
                edades[j] = auxEdad;
            }
        }
    }
}

void mostrarPersonas(char nombres[][50], char apellidos[][50], int edades[], int tam){
    int i;

    printf("Personas \n");
    for(i=0; i < tam; i++){
       /*printf(nombres[0]);
       printf(" ");
        printf(apellidos[0]);
        printf(" ");*/
        printf(edades[0]);

    }
}
