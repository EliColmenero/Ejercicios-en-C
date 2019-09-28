//Trabajo práctico N°2

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "../ArrayEmployees.h"


#define LEN 1000   //Ponerle qty_employees


int menu();

int main()
{
    //int id = 1000;
    Employee lista[LEN];
    char finish = 'y';
    int id;
    char isFree;
    Employee newEmployee(name, lastName, salary, sector);

    initEmployees(lista ,LEN, -1); //Indicamos que la posición se encuentra vacía

    do
    {
            switch(menu()){
            case 1:
                isFree = findOccurrence(lista, LEN, -1);
                if(isFree == -1){
                    printf("\n\n No queda espacio disponible para almacenar otro empleado \n\n");
                    break;
                }
                    if(addEmployees(Employee* list , LEN){  //Se incrementa el ID para asignarles en órden un ID diferente a cada empleado ingresado
                    id++;
                }
                }

            break;

            case 2:
                removeEmployee(list, id, LEN);
            break;

            case 3:

            break;

            case 4:
                if(id[i] != -1){
                printEmployees(list, LEN);
                }
            break;

            case 5:
                sortEmployeesLastName(list, LEN, 1);
            break;

            case 6:
                sortEmployeesLastName(list, LEN, 0);
            break;

            case 7:
                sortEmployeesSec(list, LEN, 1);
            break;

            case 8:
                sortEmployeesSec(list, LEN, 0);
            break;

            default:
                printf("Opción inválida \n");

                system("pause");
            }
    } while(finish != 'y');

    return 0;
}

int menu(){
    int opcion;
    system("cls");

    printf("\n\n Menu de opciones \n\n");
    printf("1- Alta empleado\n");
    printf("2- Baja empleado\n");
    printf("3- Modificacion empleado\n");
    printf("4- Listar empleados\n");
    printf("5- Ordenar empleados por apellido de forma ascendente \n");
    printf("6- Ordenar empleados por apellido de forma descendente \n");
    printf("7- Ordenar empleados por sector de forma ascendente \n");
    printf("8- Ordenar empleados por sector de forma descendente \n");
}
