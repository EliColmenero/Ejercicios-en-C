//Trabajo práctico N°1. Calculadora.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int sumar(int operando1, int operando2);
int restar(int operando1, int operando2);
int dividir(int operando1, int operando2);
int multiplicar(int operando1, int operando2);
int factorial(int operando1, int operando2);
int pedirNumeros(int operando1, int operando2);

int main()
{
    //Se declaran las variables
    int operando1;
    int operando2;
    int respuesta;
    int factorial1 = 0;
    int factorial2 = 0;
    int flag1 = 0;
    int flag2 = 0;
    char opcion;
    char salir;
    char seguir = 's';


do{
    //Se piden los números
    int pedirNumeros(int operando1, int operando2);

    //Se le pide al usuario que elija la operacion a realizar
    printf("******Menu de opciones******\n");
    printf("Elija la operacion que desea realizar: \n");
    printf("a- Suma \n");
    printf("b- Resta \n");
    printf("c- Dividision \n");
    printf("d- Multiplicacion \n");
    printf("e- Factorial \n");
    printf("f- Salir \n");
    opcion = getche();


    switch(opcion){

    case 'a': {
        printf("Usted eligio la opcion de suma \n");
        respuesta = sumar(operando1, operando2);
        printf("El resultado de la suma es %d \n" ,respuesta);
        break;

    }
    case 'b': {
        printf("Usted eligio la opcion de resta \n");
        respuesta = restar(operando1, operando2);
        printf("El resultado de la resta es: %d \n" ,respuesta);
        break;
    }
    case 'c': {
        printf("Usted eligio la opcion de division \n");
        respuesta = dividir(operando1, operando2);
        printf("El resultado de la division es: %d \n" ,respuesta);
        break;
    }
    case 'd': {
        printf("Usted eligio la opcion de multiplicacion \n");
        respuesta = multiplicar(operando1, operando2);
        printf("El resultado de la multiplicacion es: %d \n" ,respuesta);
        break;
    }
    case 'e': {
        printf("Usted eligio la opcion de factorial \n");
        respuesta = factorial(operando1, operando2);
        printf("El factorial de %d es: %d. El factorial de %d es %d \n" ,operando1 ,factorial1 ,operando2 ,factorial2);
    }
    case 'f': {
        printf("¿Desea salir? \n");
        scanf("%c" ,&salir);
    }
    }

    printf("¿Desea seguir utilizando la calculadora? Ingrese 'si' \n");
    scanf("%c" ,&seguir);

}while(seguir == 's');
    return 0;
}

//Declaracion de funciones

int pedirNumeros(int operando1, int operando2)
{
    int operando1;
    int operando2;

    printf("Ingrese el primer operando: \n");
    scanf("%d", &operando1);

    printf("Ingrese el segundo operando: \n");
    scanf("%d", &operando2);
}
int sumar(int operando1, int operando2){
    int respuesta;
    respuesta = operando1 + operando2;

    return respuesta;
}
int restar(int operando1, int operando2){
    int respuesta;
    respuesta = operando1 - operando2;

    return respuesta;
}
int dividir(int operando1, int operando2){
    int respuesta;
    respuesta = operando1/operando2;

    return respuesta;
}
int multiplicar(int operando1, int operando2){
    int respuesta;
    respuesta = operando1 * operando2;

    return respuesta;
}
int factorial(int operando1, int operando2){
    int factorial1;
    int factorial2;
    int contador = 0;

    if(operando1 == 0 || operando1 == 1 || operando2 == 0 || operando2 == 1){
        factorial1 = 1;
        factorial2 = 1;
    }
    else {
        contador++;
        factorial1 = (operando1 *= contador);
        factorial2 = (operando2 *= contador);
    }
    return factorial1;
    return factorial2;
}
