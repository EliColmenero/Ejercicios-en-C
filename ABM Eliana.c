#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TAM 10

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    int nota1;
    int nota2;
    float promedio;
    eFecha fechaIngreso;
    int isEmpty;
} eAlumno;

void mostrarAlumno(eAlumno x);
void mostrarAlumnos(eAlumno vec[], int tam);
void ordenarAlumnos(eAlumno vec[], int tam);
void inicializarAlumnos(eAlumno vec[], int tam);
int buscarLibre(eAlumno vec[], int tam);
int buscarAlumno(int legajo, eAlumno vec[], int tam);
int altaAlumno(eAlumno vec[], int tam, int leg); //devuelve si lo pudo cargar o no
eAlumno newAlumno(int leg,char nombre[],int edad, char sexo, int nota1, int nota2, eFecha f);
int bajaAlumno(eAlumno vec[], int tam);
int ModificarAlumno(eAlumno vec[], int tam);
int hardcodearAlumnos( eAlumno vec[], int tam, int cantidad);
int menu();

int main()
{
    int legajo = 20000;
    eAlumno lista[TAM];
    char salir = 'n';

    inicializarAlumnos( lista, TAM);

    legajo = legajo + hardcodearAlumnos(lista, TAM, 9); //Le paso lista, tam y la cantidad de alumnos que quiero cargar

    do
    {
        switch( menu())
        {
        case 1:
            if(altaAlumno(lista, TAM, legajo)){
                legajo++;
            }
            break;

        case 2:
            bajaAlumno(lista, TAM);
            break;

        case 3:
            ModificarAlumno(lista, TAM);
            break;

        case 4:
            mostrarAlumnos(lista, TAM);
            break;

        case 5:

            ordenarAlumnos(lista, TAM);
            break;

        case 6:
            printf("Informes Alumno\n\n");
            break;

        case 7:
            printf("Confirma salir?:");
            fflush(stdin);
            salir = getche();
            break;

        default:
            printf("\nOpcion Invalida!\n\n");
        }
        system("pause");
    }
    while(salir == 'n');

    return 0;
}

int menu()
{
    int opcion;

    system("cls");
    printf("****** ABM Alumnos *******\n\n");
    printf("1-Alta alumno\n");
    printf("2-Baja alumno\n");
    printf("3-Modificar alumno\n");
    printf("4-Listar alumnos\n");
    printf("5-Ordenar alumnos\n");   //Hacer un submenu que de funciones para ordenar por legajo, por promedio, etc
    printf("6-Informes alumno\n");
    printf("7-Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}


void mostrarAlumno(eAlumno x)
{
    printf("  %d     %s     %d    %c   %d  %d  %.2f %02d/%02d/%d\n",
           x.legajo,
           x.nombre,
           x.edad,
           x.sexo,
           x.nota1,
           x.nota2,
           x.promedio,
           x.fechaIngreso.dia,
           x.fechaIngreso.mes,
           x.fechaIngreso.anio);
}

void mostrarAlumnos(eAlumno vec[], int tam)
{

    int flag = 0;
    system("cls");

    printf(" Legajo   Nombre    Edad    Sexo    Nota1    Nota2    Promedio    FIngreso\n");

    for(int i=0; i < tam; i++)
    {
        if( vec[i].isEmpty == 0)
        {
            mostrarAlumno(vec[i]);
            flag = 1;
        }
    }

    if( flag == 0)
    {
        printf("\nNo hay alumnos que mostrar\n");
    }

    printf("\n\n");
}

void ordenarAlumnos(eAlumno vec[], int tam)
{
    eAlumno auxAlumno;

    for(int i= 0; i < tam-1 ; i++)
    {
        for(int j= i+1; j <tam; j++)
        {
            if( vec[i].legajo > vec[j].legajo)
            {
                auxAlumno = vec[i];
                vec[i] = vec[j];
                vec[j] = auxAlumno;
            }
        }
    }
}

void inicializarAlumnos(eAlumno vec[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        vec[i].isEmpty = 1;
    }
}


int buscarLibre(eAlumno vec[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if( vec[i].isEmpty == 1 )
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int buscarAlumno(int legajo, eAlumno vec[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if( vec[i].legajo == legajo && vec[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int altaAlumno(eAlumno vec[], int tam, int leg){
    int todoOk = 0;
    int indice;
    //int esta;
    int legajo = 20000;
    char nombre[20];
    char sexo;
    int edad;
    int n1;
    int n2;
    eFecha fecha;

    system("cls");

    printf("*****Alta Alumno*****\n\n");

    indice = buscarLibre(vec, tam);

    if( indice == -1){
        printf("\nSistema completo\n\n");
    /*}
    else{

        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarAlumno(legajo, vec, tam);

        if( esta != -1){
            printf("\nEse legajo ya se encuentra registrado\n\n");
            mostrarAlumno(vec[esta]);

        }*/
        } else{
                printf("Ingrese nombre: ");
                fflush(stdin);
                gets(nombre);

                printf("Ingrese edad: ");
                scanf("%d", &edad);

                printf("Ingrese sexo: ");
                fflush(stdin);
                scanf("%c", &sexo);

                printf("Ingrese nota 1: ");
                scanf("%d", &n1);

                printf("Ingrese nota 2: ");
                scanf("%d", &n2);

                printf("Ingrese fecha ingreso: ");
                scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

                vec[indice] = newAlumno(legajo, nombre, edad, sexo, n1, n2, fecha);
                todoOk = 1;
                printf("Alta exitosa!!\n\n");



    }

    return todoOk;
}

eAlumno newAlumno(
                  int leg,
                  char nombre[],
                  int edad,
                  char sexo,
                  int nota1,
                  int nota2,
                  eFecha fecha){

    eAlumno al;
    al.legajo = leg;
    strcpy( al.nombre, nombre);
    al.sexo = sexo;
    al.edad = edad;
    al.nota1 = nota1;
    al.nota2 = nota2;
    al.promedio = (float) (nota1 + nota2 )/2;
    al.fechaIngreso = fecha;
    al.isEmpty = 0;

    return al;
}


int bajaAlumno(eAlumno vec[], int tam){
    int todoOk = 0;
    int legajo;
    int indice;
    char confirma;
    system("cls");
    printf("***** Baja Alumno *****\n\n");
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    indice = buscarAlumno(legajo, vec , tam);

    if( indice == -1){
        printf("No existe un alumno con ese legajo\n\n");

    }
    else{

        mostrarAlumno(vec[indice]);

        printf("\nConfirma baja?");
        fflush(stdin);
        scanf("%c", &confirma);

        if( confirma == 's'){
            vec[indice].isEmpty = 1;
            todoOk = 1;
            printf("Baja exitosa!!!");
        }
        else{
            printf("Se ha cancelado la operacion");
        }
    }

    return todoOk;

    //int hardcodearAlumnos( eAlumno vec[], int tam, int cantidad);
}
int ModificarAlumno(eAlumno vec[], int tam){

    int todoOk = 0;
    int legajo;
    int indice;
//    char confirma;
    system("cls");
    printf("***** Modificar Alumno *****\n\n");
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);
    int opcion;

    indice = buscarAlumno(legajo, vec , tam);

    if( indice == -1){
        printf("No existe un alumno con ese legajo\n\n");

    }
    else{

        mostrarAlumno(vec[indice]);

        printf("1- Modificar nota1\n");
        printf("2- Modificar nota2\n");
        printf("3- Salir\n\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
    case 1:
        printf("Ingrese nueva nota: ");
        scanf("%d", &vec[indice].nota1);
        vec[indice].promedio = (float) (vec[indice].nota1  + vec[indice].nota2)/2;
        break;

    case 2:
        printf("Ingrese nueva nota: ");
        scanf("%d", &vec[indice].nota2);
        vec[indice].promedio = (float) (vec[indice].nota1  + vec[indice].nota2)/2;
        break;
    case 3:
        printf("Se ha cancelado la mofdificacion ");
        break;

        }
    }
    return todoOk;
}

//Va a devolver la cantidad de alumnos que cargo
int hardcodearAlumnos( eAlumno vec[], int tam, int cantidad){

    int contador = 0;
    eAlumno suplentes[] = {             //Vector de alumnos harcodeado. Lo uso como reserva para que la cantidad que me hayan dicho sea lo que cargue aca como parametros
        {20000, "Juan", 20, 'm', 5, 7, 6, {12, 5, 2015}, 0},
        {20001, "Alberto", 20, 'm', 4, 7, 6, {25, 6, 2018}, 0},
        {20002, "Ana", 20, 'f', 5, 4, 5, {14, 9, 2011}, 0},
        {20003, "Luis", 20, 'm', 1, 8, 4, {2, 6, 2010}, 0},
        {20004, "Alicia", 20, 'f', 5, 9, 6, {26, 6, 2019}, 0},
        {20005, "Diego", 20, 'm', 5, 3, 6, {24, 4, 2012}, 0},
        {20006, "Sofia", 20, 'f', 8, 5, 1, {6, 11, 2009}, 0},
        {20007, "Clara", 20, 'f', 8, 4, 1, {8, 11, 2008}, 0},
        {20008, "Mauro", 20, 'm', 3, 4, 1, {4, 10, 2014}, 0},
        {20009, "Daniela", 20, 'f', 7, 1, 2, {10, 12, 2018}, 0},
        {20010, "Agustin", 20, 'm', 2, 9, 7, {5, 1, 2019}, 0},
    };

    if (cantidad <= 10 && tam >= cantidad){
        int i;

        for(i=0; i < cantidad; i++){

            vec[i] = suplentes[i];
            contador++;
        }
    }

    return contador;

    }
