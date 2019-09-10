#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void MostrarAlumnos(int legs[], int ages[], char sexs[], int notasP1[], int notasP2[], float proms[], int tam);

int main()
{
    int i;
    int legajos[TAM];
    int edades[TAM];
    int notasP1[TAM];
    int notasP2[TAM];
    char sexos[TAM];
    float promedio[TAM];

    for(i = 0; i < TAM; i++){
        printf("Ingrese el legajo \n");
        scanf("%d" ,&legajos[i]);

        printf("Ingrese la edad \n");
        scanf("%d" ,&edades[i]);

        printf("Ingrese el sexo \n");
        scanf("%c" ,&sexos[i]);

        printf("Ingrese la nota del primer parcial \n");
        scanf("%d" ,&notasP1[i]);

        printf("Ingrese la nota del segundo parcial \n");
        scanf("%d" ,&notasP2[i]);

        promedio[i] = (float) (notasP1[i] + notasP2[i]) / 2;

        printf("\n legajo    edad    sexo   notap1   notap2   promedio \n");

        printf("%d   %d   %c   %d   %d    %2.f" ,legajos[i] ,edades[i], sexos[i], notasP1[i], notasP2[i], promedio[i]);
    }

    return 0;
}

void MostrarAlumnos(int legs, int ages, char sexs, int notasP1, int notasP2, float proms, int tam){
    int i;

    printf()
    for(i = 0; i < tam; i++){
        mostrarAlumno(legs[i], ages[i], sexs[i], notasP1[i], notasP2[i]
    }

}

void MostrarAlumno(int legajo, int edad; char sexo; int notaP1; int notaP2; float promedio){
    printf("%d      %d    %c    %d   %d   %2.f" ,legajo, edad, sexo, notaP1, notaP2, promedio);

}
