#include <stdio.h>
#include <stdlib.h>

typedef struct{   //Definicion de la estructura

    int legajo;
    int edad;
    int notaP1;
    int notaP2;
    char nombre[20];
    char sexo;
    float promedio;


    }eAlumno;


void MostrarAlumno(eAlumno al);
void MostrarAlumnos(eAlumno vec[], int tam);

int main()
{
    eAlumno lista[TAM];
    int i;

    for(i=0 ; i<TAM ;i++){
    printf("Ingrese legajo \n");
    scanf("%d" ,&lista[i].legajo);

    printf("Ingrese nombre \n");
    scanf("%s" ,lista[i].nombre);

    printf("Ingrese edad \n");
    scanf("%s" ,&lista[i].edad);

    printf("Ingrese de nota parcial 1 \n");
    scanf("%s" &lista[i].notaP1);

    printf("Ingrese de nota parcial 2 \n");
    scanf("%s" &lista[i].notaP2);

    printf("Ingrese nombre \n");
    scanf("%s" ,nombre.alumno1);

    printf("Ingrese sexo \n");
    scanf("%s" &lista[i].sexo);

    lista[i].promedio = (float) (lista[i].notaP1 + lista[i].notP2) / 2;
    printf("El promedio es %2.f" ,promedio);

    }

    void MostrarAlumno(eAlumno);
    void MostrarAlumnos(eAlumno vec[], int tam);



    return 0;
}

void MostrarAlumno(eAlumno al){

printf("%s %d %d %c %d %d %2.f",

al.nombre,
al.legajo,
al.edad,
al.sexo,
al.notaP1,
al.notaP2,
al.promedio);
}

void MostrarAlumnos(eAlumno vec[], int tam){


    for(i=0; i<tam; i++){
        MostrarAlumno(vec[i]);
    }
    printf("\n\n");
}
