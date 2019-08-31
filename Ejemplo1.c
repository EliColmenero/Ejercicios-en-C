#include <stdio.h>
#include <stdlib.h>
/* Prototipos */
void saludar();
void sumarYmostrar(int numeroUno, int numeroDos); //Parametros: valores que va a tener definidos la funcion entre ()
int sumar(int numeroUno, int numeroDos);
int calcular(int numeroUno, int numeroDos, int operacion);
/*Las operaciones 1.suma 2.resta 3.mult 4.div 5.factorial*/

int main()
{


   /* int resultado;
    int numeroUno = 333;
    saludar(); //La puedo llamar las veces que quiera
    sumarYmostrar(333,222);
    */

    return 0;

}
void saludar()
{
    printf("Bienvenidos a las funciones \n");
}

void sumarYmostrar(int numeroUno, int numeroDos) //El scope es lo que puede ver
{
    int suma;
    suma = numeroUno + numeroDos;
    printf("El resultado de la suma es %d" ,suma);
}
int sumar(int numeroUno, int numeroDos)
{
    int resultado;

    numeroUno = numeroUno + numeroDos;
    printf("El resultado de la suma es %d " ,resultado);

    return resultado;
}

