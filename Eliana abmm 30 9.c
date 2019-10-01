#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

#include "informes.h"
#include "carreras.h"
#include "alumnos.h"
#include "libreria.h"

#define TAM 10
#define TAMC 3
#define TAMCOM 5
#define TAMAL 10


void inicializarAlmuerzos(eAlmuerzo vec[], int tam);
int hardcodearAlmuerzos( eAlmuerzo vec[], int tam, int cantidad);
int cargarDescAlmuerzo(int idAlmuerzo, eAlmuerzo vec[], int tam, char desc[]);

// ESTRUCTURAS
typedef struct{
    int id;
    char descripcion[20];
    float precio;
}eComida;

typedef struct{
    int id;
    int legajo;
    int idComida;
    eFecha fecha;
    int isEmpty;
}eAlmuerzo;

////////////////////////////////// PROTOTIPOS

int menu();
void mostrarComida(eComida comida);
void mostrarComidas(eComida comidas[], int tam);

//////////////////////////////// MAIN
int main()
{
    int legajo = 20000;
    int idAlmuerzo = 60000;

    eAlumno lista[TAM];

    eCarrera carreras[TAMC]={{1000,"TUP"},{1001,"TUSI"},{1002,"LIC"}};

    eComida comidas[TAMCOM] = {
        {5000, "Bife", 250},
        {5001, "Fideos", 200},
        {5002, "Pizza", 190},
        {5003, "Arroz", 200},
        {5004, "Milanesa", 220}
    };

    eAlumno lista[TAM];
    eAlmuerzo almuerzos[TAMAL]; //Para poder hardcodear el vector de almuerzos

    inicializarAlumnos(lista, TAM);
    inicializarAlmuerzos(almuerzos, TAMAL);

    hardcodearAlmuerzos(eAlmuerzo vec[], tam, cantidad);


    legajo = legajo + hardcodearAlumnos(lista, TAM, 6);
    idAlmuerzo = idAlmuerzo + hardcodearAlmuerzos(almuerzos, TAMAL, 6);

    char salir = 'n';

    do{

        switch(menu()){

        case 1:
            //  ALTA ALUMNO
            if(altaAlumno(lista, TAM, legajo, carreras, TAMC)){
                legajo++;
            }

            break;
        case 2:
           //  BAJA ALUMNJO
            bajaAlumno(lista, TAM, carreras, TAMC);
            break;
        case 3:
            // MODIFICAR ALUMNO
            modificarAlumno(lista, TAM, carreras, TAMC);
            break;
        case 4:
            // MOSTRAR ALUMNOS
            mostrarAlumnos(lista, TAM, carreras, TAMC);
            break;
        case 5:
            // ORDENAR ALUMNOS
            ordenarAlumnos(lista, TAM);
            break;
        case 6:
            // IFORMES
            mostrarInformes(lista, TAM, carreras, TAMC);
            break;
        case 7:
            // MOSTRAR CARRERAS
            mostrarCarreras(carreras, TAMC);
            break;
        case 8:
            // MOSTRAR comidas
            mostrarComidas(comidas, TAMCOM);
            break;
        case 11:
            printf("Confirma Salir?  ");
            fflush(stdin);
            salir = getchar();
            salir = tolower(salir);
            printf("\n\n");
            break;


        default:
            printf("Opcion invalida.");
            break;
        }

        system("pause");
    }while(salir == 'n');



    return 0;
}


int menu(){

    int opcion;

    system("cls");

    printf("\n***** ABM de Alumnos  ********\n\n");
    printf("1- Alta \n");
    printf("2- Baja \n");
    printf("3- Modificar  \n");
    printf("4- Mostrar Alumnos \n");
    printf("5- Ordenar Alumnos \n");
    printf("6- Informes \n");
    printf("7- Listar CARRERAS \n");
    printf("8- Mostrar Comidas \n");

    printf("11- Salir \n");


    getIntRange(&opcion, "Ingrese Opcion: ", "Error. Ingrese un entero entre 1 y 8: ", 1, 8);

    return opcion;
}

void mostrarComida(eComida comida){
    printf(" %d   %s      %.2f  \n\n", comida.id,  comida.descripcion, comida.precio);
}

void mostrarComidas(eComida comidas[], int tam){
    system("cls");

    printf("\n COMIODA   PRECIO \n");
    printf("**********************\n");

    for(int i=0; i<tam; i++){
        mostrarComida(comidas[i]);

    }
}

void inicializarAlmuerzos(eAlmuerzo vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i].isEmpty = 1;
    }
}

int hardcodearAlmuerzos( eAlmuerzo vec[], int tam, int cantidad){
    int cont = 0;

    eAlmuerzo suplentes[]=
    {
        { 60000, 20000, 5000, {12, 5, 2019}, 0},
        { 60001, 20001, 5001, {05, 5, 2014}, 0},
        { 60002, 20002, 5000, {10, 7, 2015}, 0},
        { 60003, 20003, 5000, {20, 1, 2015}, 0},
        { 60004, 20004, 5002, {15, 5, 2015}, 0},
        { 60005, 20002, 5001, {16, 2, 2016}, 0},
        { 60006, 20002, 5000, {23, 4, 2015}, 0},
        { 60007, 20004, 5004, {08, 7, 2014}, 0},
        { 60008, 20003, 5004, {15, 9, 2015}, 0},
        { 60009, 20001, 5000, {12, 12, 2015},0},
        { 60010, 20010, 5002, {30, 3, 2015}, 0},
    };

    if( cantidad <= 10 && tam >= cantidad)
    {
        for(int i=0; i < cantidad; i++)
        {
            vec[i] = suplentes[i];
            cont++;
        }
    }

    return cont;
}

void MostrarAlmuerzo(eAlmuerzo Com, int tam){

     char descAlmuerzo[20];

    cargarDescAlmuerzo(Com.idAlmuerzo, comidas, tam, descAlmuerzo);

    printf("%d  %d  %d    %02d/%02d/%d  ",
           Com.id
           ,Com.legajo
            ,Com.fecha.dia
            ,Com.fecha.mes
            ,Com.fecha.anio
            ,descAlmuerzo
           ,Com.idComida);

}

void MostrarAlmuerzos(eAlmuerzo vec[], int tam, int cantidad){
    int flag = 0;

    system("cls");

    printf("\n ID     Legajo     idComida    Fecha \n");

    for(int i=0; i<tam; i++){
        if(vec[i].isEmpty == 0){
           MostrarAlmuerzo(vec[i], comidas, cantidad);
           flag = 1;
        }

    }
    if(flag == 0){
        printf("No hay alumnos que mostrar");
    }
    printf("\n\n");
}
}

int cargarDescAlmuerzo(int idAlmuerzo, eAlmuerzo vec[], int tam, char desc[]){
    char desc[];
    int todoOk = 0;

    for(int i=0; i < tam; i++){
        if( id == almuerzos[i].id){
            strcpy(desc, carreras[i].descripcion);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

eAlmuerzo newAlmuerzo(int id, int legajo, int idComida, eFecha fecha){
    eAlmuerzo Com;

    Com.id = id;
    Com.legajo = leg;
    Com.idComida = idComida;
    Com.fecha = fecha;
    Com.isEmpty = 0;

    return Com;
}
