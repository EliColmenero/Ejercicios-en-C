#include <stdio.h>
#include <stdlib.h>

char menu();

int main()
{
    char opcion;
    char seguir;
    char salir == 'n';

    do{


        switch(menu()){

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
            fflush(stdin);
            seguir = getche();
            system("pause");
            break;

        default:
            printf("\n Opcion invalida \n\n");
            system("pause");
            break; //codeblocks obliga a poner break en default


        }

    }while(seguir=='n');

    return 0;
}

char menu(){

     char opcion;

     system("cls");

     printf("Elija la opcion ");

     printf("--Menu de opciones--\n\n\n");

        printf("a- Sumar\n");
        printf("b- Restar\n");
        printf("c- Multiplicacion");
        printf("d- Dividir\n");
        printf("f- Salir\n\n");
        printf("Ingrese la opcion: ");
        fflush(stdin); //Fflush siempre se pide en la linea anterior a donde se va a pedir el caracter
        opcion = getchar();

     return opcion;
}
