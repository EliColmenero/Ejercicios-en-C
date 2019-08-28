#include <stdio.h>
#include <stdlib.h>

float CalcularSupCirculo(float radio);

int main()
{
    float radio;
    float superficie;

    printf("Ingrese el radio del circulo \n");
    scanf("%f" ,&radio);

    superficie = CalcularSupCirculo(radio);

    printf("La superficie es %.2f \n\n" ,superficie);



    return 0;
}

float CalcularSupCirculo(float radio){

    float superficie;

    superficie = 3.14 * radio * radio;

    return superficie;

}
