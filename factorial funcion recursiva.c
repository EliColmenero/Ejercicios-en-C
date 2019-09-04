#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("El factorial es %lli" ,factorial(5));

    return 0;
}

int factorial(int ){
    int fact = 1;

    if(fact > 1){
        fact = x * factorial(x-1);
    }
    return fact;
}
