#include <stdio.h>
#include <stdlib.h>

//Pedir 5 sexos f o m y mostrar cuantas mujeres hay y cuantos hombres hay

int main()
{
    char sexo[5];
    int flag = 0;
    int contadorMujeres = 0;
    int contadorHombres = 0;

    for(i = 0; i < 5; i++){
        printf("%c" ,sexo[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Ingrese sexo \n");
        fflush(stdin);
        scanf("%c" ,&sexo[i]);

        while(sexo =! 'f' && sexo =! 'm'){
            printf("Error. Ingrese un sexo valido 'f' o 'm' \n");
            fflush(stdin);
            scanf("%c" ,&sexo[i]);
        }
    }

    if(sexo == 'f' && flag == 0){
            contadorMujeres++;
        } else {
            contadorHombres++;
        }
        printf("La cantidad de mujeres es %d y la cantidad de hombres es %d " ,contadorMujeres ,contadorHombres);



    return 0;
}
