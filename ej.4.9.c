#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main()
{


    printf("El factorial es %lli" ,factorial(25)); //lli long long int


    return 0;
}

int factorial(int x){
    /*Es una funcion unaria porque lo saca de un numero
    Hago que tome todos los valores del x al 1, porque tengo que multiplicar todos los numeros anteriores
    */

    int fact = 1;

    while(x > 1){
        fact = fact * x; //Si x vale 5 5*1=5, x vale 4, 4*5... etc
        x--;
    }

    return fact;
}
