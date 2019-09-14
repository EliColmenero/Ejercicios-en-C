#include <stdio.h>
#include <stdlib.h>
#include <

int main()
{
    char nombre[20];
    char auxCad[100];

    printf("\nIngrese un nombre: \n");
    gets(auxCad);

    while(strlen(auxCad) > 19){
        printf("\nError. Ingrese un nombre valido \n");
        fflush(stdin);
        gets(auxCad);
    }

    strcpy(nombre, auxCad);



    return 0;
}
