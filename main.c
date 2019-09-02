#include <stdio.h>
#include <stdlib.h>

 void changeX(int*);

int main()
{
        int x;

        changeX(&x); //Le paso la direccion de memoria de donde esta x
        printf("%d" ,x);

    return 0;
}
void changeX(int* puntero){
    int numero;

    //Pasaje de valor por referencia. Le doy permiso a la funcion para que modifique a la otra
    printf("Ingrese un numero "); //Pido el numero que quiero que se le asigne a x
    scanf("&d" ,&numero);
    *puntero = numero; //Le paso al puntero el valor que quiero que tome el x (de variable) en main
}
