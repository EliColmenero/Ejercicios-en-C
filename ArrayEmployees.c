#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "ArrayEmployees.h"



/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(Employee* list ,int len){
    int i;

    for(i = 0; i < len; i++){
        Employee[i].isEmpty = 1;
    }
    return 0;
}

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
 *
 */
int addEmployees(Employee* list, int id, char name[], char lastName[], float salary, int sector, int len){
    int index = -1;
    int i;

    for(i = 0; i < len; i++){
        if(Employee[i].isEmpty == 1){
            index = i;
            break;     //Se corta el ciclo para que el sistema no continúe buscando al encontrar el espacio libre para ubicar los datos.
        }
    }
    return index;
}

/** \brief find an Employee by Id and returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
 int findEmployeeById(Employee* list, int id, int len){
    int index = -1;
    int i;

    for(i = 0; i < len; i++){
        if(Employee[i].isEmpty == 0 && Employee.id == id){
            index = i;
            break;
        }
    }
    return NULL;
 }

 /** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
 int removeEmployee(Employee* list, int id, int len){
    int OK = 0;
    int index;
    int id;
    char confirm;

    system("cls");
    printf("******* Eliminar un empleado ********\n");

    printf("Ingrese el ID del empleado que desea eliminar: \n");
    scanf("%d" ,&id);

    index = findEmployeeById(id, Employee, len);

    if(index == -1){
        printf("El ID ingresado no existe \n");  //Se valida si el ID ingresado existe, de lo contrario no podrá ser eliminado ya que no se encontró.
        system("pause");
    }
    else
    {
        printEmployees(Employee* list);  //Si se logra encontrar el empleado que coincida con el ID ingresado, se procede a confirmar la eliminación.
        printf("\n ¿Confirma la eliminacion del empleado? \n");
        fflush(stdin);

        confirm = getche();

        if(confirm == 's'){
            Employee[i].isEmpty = 1;
            printf("\n Se ha eliminado el empleado seleccionado \n"); //Se puede realizar la operación.

            OK = 1;
        }
        else
        {
            printf("\n No se pudo realizar la baja \n");
        }
        system("pause");
    }
    return -1;
 }

 /** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
 int sortEmployeesSec(Employee* list, int len, int order){   //Función para ordenar los empleados por sector.
    Employee auxEmployee;
    int i;
    int j;
    int order;


    if(order == 1){
    for(i = 0; i < len; i++){
        for(j = i+1; j < len, j++){
            if(vec[i].sector > vec[j].sector && vector[i].isEmpty == 0 && vec[j].isEmpty == 0){
                auxEmployee = vec[i];
                vec[i] = vec[j];
                vec[j] = auxEmployee;
            }
        }
    }
    }
    else
    {
        for(i = 0; i > len; i++){
        for(j = i+1; j > len, j++){
            if(vec[i].sector < vec[j].sector && vector[i].isEmpty == 0 && vec[j].isEmpty == 0){
                auxEmployee = vec[i];
                vec[i] = vec[j];
                vec[j] = auxEmployee;
            }
        }
    }
    }
    return 0;
 }

 int sortEmployeesLastName(Employee* list, int len, int order){   //Función para ordenar los empleados por apellido.
    Employee auxEmployee;
    int i;
    int j;
    int order;

    if(order == 1){
    for(i = 0; i < len; i++){
        for(j = i+1; j < len, j++){
            if(vec[i].lastName > vec[j].lastName && vector[i].isEmpty == 0 && vec[j].isEmpty == 0){
                auxEmployee = vec[i];
                vec[i] = vec[j];
                vec[j] = auxEmployee;
            }
        }
    }
    }
    else
    {
         for(i = 0; i > len; i++){
        for(j = i+1; j > len, j++){
            if(vec[i].lastName < vec[j].lastName && vector[i].isEmpty == 0 && vec[j].isEmpty == 0){
                auxEmployee = vec[i];
                vec[i] = vec[j];
                vec[j] = auxEmployee;
            }
        }
    }
    }
    return 0;
 }

 /**




 */
 int printEmployee(Employee y){
        printf("%d   %s   %s   %d   %d    " ,y.id ,y.name ,y.lastName ,y.salary ,y.sector);
 }

 /** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
 int printEmployees(Employee* list, int length){
    int flag;  //Para informar si no existen datos para mostrar.
    int i;
    system("cls");

    printf("\n**** Listado de empleados ******\n");
    for(i = 0; i < length; i++){
        if(Employee[i].isEmpty == 0){
            printEmployee(Employee[i]);
            flag = 1;
        }
    }
    if(flag == 0){
        system("cls");
        printf("\n****** No hay empleados para mostrar ******\n");
    }
    return 0;
 }
