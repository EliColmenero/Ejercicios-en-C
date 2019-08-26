#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    char seguir;

    do{

        system("cls");
        printf("--Menu de opcions--\n\n\n");
        printf("a- Sumar\n");
        printf("b- Restar\n");
        printf("c- Multiplicacion");
        printf("d- Dividir\n");
        printf("f- Salir\n\n");
        printf("Ingrese la opcion: ");
        opcion = getche();

        switch(opcion){

        case 'a':
            printf("\nUsted eligio la opcion sumar \n");
            system("pause"); //Para el programa y espera a que apretemos enter u otra tecla para continuar
            //getch; para linux
            break;

        case 'b':
            printf("\nUsted eligio la opcion restar \n");
            system("pause");
            break;

        case 'c':
            printf("\nUsted eligio la opcion multiplicar \n");
            system("pause");
            break;

        case 'd':
            printf("\nUsted eligio la opcion dividir \n");
            system("pause");
            break;

        case 'e':
            printf("\nUsted eligio la opcion salir \n");
            printf("Confirma la salida?");
            seguir = getche();
            system("pause");
            break;

        default:
            printf("\nOpcion invalida \n\n");
            system("pause");
            break; //codeblocks obliga a poner break en default


        }

    }while(seguir=='n');

    return 0;
}
