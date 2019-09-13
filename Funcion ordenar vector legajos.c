#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void ordenarAlumnos(int sexo[], int legajo[], int edad[], float promedio[], int tam);

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
        fflush(stdin);

        printf("Ingrese la nota del primer parcial \n");
        scanf("%d" ,&notasP1[i]);

        printf("Ingrese la nota del segundo parcial \n");
        scanf("%d" ,&notasP2[i]);

        promedio[i] = (float) (notasP1[i] + notasP2[i]) / 2;

        printf("\n legajo    edad    sexo   notap1   notap2   promedio \n");

       void ordenarAlumnos(int sexo[], int legajo[], int edad[], float promedio[], int tam);

        printf("%d            %d         %c          %d           %d            %2.f" ,legajos[i] ,edades[i], sexos[i], notasP1[i], notasP2[i], promedio[i]);
        }

    return 0;
}

void ordenarAlumnos(int sexo[], int legajo[], int edad[], float promedio[], int tam){
    int i;
    int j;
    int auxInt;
    char auxChar;
    float auxFloat;
    int flag = 0;

    for(i = 0; i < tam - 1; i++){
        for(j = i + 1; j < tam; j++){

            if(sexo[i] > sexo[j]){
                flag = 1;
                } else {
                if(flag){
                //Codigo de swap
                auxInt = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = auxInt;

                auxInt = edad[i];
                edad[i] = edad[j];
                edad[j] = auxInt;

                auxChar = sexo[i];
                sexo[i] = sexo[j];
                sexo[j] = auxChar;

                auxFloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxFloat;
                }
                }
                flag = 0;
            }
        }
    }
