#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    int nota;
    int acumuladorNotas=0;
    int contadorNotas=0;
    int notaMaxima = 0;
    int notaMinima = 0;
    int contadorMujeres = 0;
    int acumuladorMujeres = 0;
    int contador = 0;
    float promedio;
    float promedioMujeres = 0;
    char respuesta;
    char nombre[20];
    char nombreMaximo = 0;
    char nombreMinimo = 0;
    char sexo;
    char sexoMinimo = 0;
    char sexoMaximo = 0;

    do{
        printf("Ingrese el nombre del alumno \n");
        gets(nombre);
        fflush(stdin);

        printf("Ingrese la nota del alumno \n");
        fflush(stdin);
        scanf("%d" ,&nota);

        while(nota<0 || nota>10){
            printf("Ingrese una nota valida entre 0 y 10 \n");
            fflush(stdin);
            scanf("%d" ,&nota);
        }

        printf("Ingrese el sexo del alumno 'f' o 'm' \n");
        fflush(stdin);
        scanf("%c" ,&sexo);

        while(sexo != 'f' || sexo != 'm'){
            printf("Ingrese un sexo valido 'f' o 'm' \n");
            fflush(stdin);
            scanf("%c" ,&sexo);
        }

        acumuladorNotas += nota;
        contadorNotas ++;

        if(sexo == 'f'){
            contadorMujeres += nota;
            acumuladorMujeres ++;
        }

        printf("Desea seguir ingresando notas? \n");
        fflush(stdin);
        scanf("%c", &respuesta);
        //respuesta = getche();



    }while(respuesta=='s');


        promedio = (float) acumuladorNotas/contadorNotas;

        if(nota > notaMaxima || contador == 0){
            notaMaxima = nota;
            sexoMaximo = sexo;
            strcpy(nombreMaximo, nombre);
        }
        if(nota < notaMinima || contador == 0){
            notaMinima = nota;
            sexoMinimo = sexo;
            strcpy(nombreMinimo, nombre);
            contador == 1;
        }

        if(contadorMujeres != 0){
            promedioMujeres = acumuladorMujeres/contadorMujeres;
        }

        printf("El promedio de las notas es %f " ,promedio);


    return 0;
}
