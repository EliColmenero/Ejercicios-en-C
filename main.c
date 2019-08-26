#include <stdio.h>
#include <stdlib.h>


int sumar1(int a, int b); //Prototipo de la funcion

int main()
{
    int numero1;
    int numero2;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("Ingrese otro numero: ");
    scanf("%d", &numero2);

    suma = sumar1(numero1, numero2);


    printf("La suma es ", suma);



    return 0;
}
int sumar1(int a, int b){
    int suma;
    suma = a + b;
    return suma;
}
