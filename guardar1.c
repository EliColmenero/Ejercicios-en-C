#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Si lo pongo con printf me lo muestra igual pero no esta bien, tengo que usar strcpy
    char x [20] = "Juan";
    char y [20];

    strcpy(y,x);
    printf("%s\n" ,y);



    return 0;
}
