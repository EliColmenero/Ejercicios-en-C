#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


#define LEN 1000 //Qty_Employees

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;

int menu();
int initEmployees(eEmployee EmployeeList[],int len);
int addEmployees(eEmployee EmployeeList[], int id, char name[], char lastName[], float salary, int sector, int len);
int findEmployeeById(eEmployee EmployeeList[], int id, int len);
int removeEmployee(eEmployee EmployeeList[], int id, int len);
int sortEmployeesSec(eEmployee EmployeeList[], int len, int order);
int sortEmployeesLastName(eEmployee EmployeeList[], int len, int order);
int printEmployee(eEmployee y);
int printEmployees(eEmployee EmployeeList[], int length);


int main()
{
    //int id = 1000;
    eEmployee lista[LEN];
    char finish = 'y';
    int id;
    char isFree;
    eEmployee newEmployee(name, lastName, salary, sector);

    initEmployees(lista ,LEN); //Indicamos que la posición se encuentra vacía

    do
    {
            switch(menu()){
            case 1:
                isFree = findOccurrence(lista, LEN, -1); //
                if(isFree == -1){
                    printf("\n\n No queda espacio disponible para almacenar otro empleado \n\n");
                    break;
                }
                    if(addEmployees(lista, lista[LEN].id, lista[LEN].name, lista[LEN].lastName, lista[LEN].salary, lista[LEN].sector, LEN){  //Se incrementa el ID para asignarles en órden un ID diferente a cada empleado ingresado
                    id++;
                }
                }

            break;

            case 2:
                removeEmployee(lista, id, LEN);
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
    printf("5- Ordenar empleados por apellido de forma ascendente \n"); //Hacer otro menu para ordenar
    printf("6- Ordenar empleados por apellido de forma descendente \n");
    printf("7- Ordenar empleados por sector de forma ascendente \n");
    printf("8- Ordenar empleados por sector de forma descendente \n");
}

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(eEmployee EmployeeList[], int len){
    int i;

    for(i = 0; i < len; i++){
        EmployeeList[i].isEmpty = 1;
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
int addEmployees(eEmployee EmployeeList[], int id, char name[], char lastName[], float salary, int sector, int len){
    int index = -1;
    int i;

    for(i = 0; i < len; i++){
        if(eEmployee[i].isEmpty == 1){
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
 int findEmployeeById(eEmployee EmployeeList[], int id, int len){
    int index = -1;
    int i;

    for(i = 0; i < len; i++){
        if(eEmployee[i].isEmpty == 0 && Employee.id == id){
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
 int removeEmployee(eEmployee EmployeeList[], int id, int len){
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
            eEmployee[i].isEmpty = 1;
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
 int sortEmployeesSec(eEmployee EmployeeList[], int len, int order){   //Función para ordenar los empleados por sector.
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

 int sortEmployeesLastName(eEmployee EmployeeList[], int len, int order){   //Función para ordenar los empleados por apellido.
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
 int printEmployee(eEmployee y){
        printf("%d   %s   %s   %d   %d    " ,y.id ,y.name ,y.lastName ,y.salary ,y.sector);
 }

 /** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
 int printEmployees(eEmployee EmployeeList[], int length){
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

