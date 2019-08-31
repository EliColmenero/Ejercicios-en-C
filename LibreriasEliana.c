int pedirNumeros(int operando1, int operando2)
{
    printf("Ingrese el primer operando: \n");
    scanf("%d", &operando1);

    printf("Ingrese el segundo operando: \n");
    scanf("%d", &operando2);
}
int sumar(int operando1, int operando2){
    int respuesta;
    respuesta = operando1 + operando2;

    return respuesta;
}
int restar(int operando1, int operando2){
    int respuesta;
    respuesta = operando1 - operando2;

    return respuesta;
}
int dividir(int operando1, int operando2){
    int respuesta;
    respuesta = operando1/operando2;

    return respuesta;
}
int multiplicar(int operando1, int operando2){
    int respuesta;
    respuesta = operando1 * operando2;

    return respuesta;
}
int factorial(int operando1, int operando2){
    int factorial1;
    int factorial2;
    int contador = 0;

    if(operando1 == 0 || operando1 == 1 || operando2 == 0 || operando2 == 1){
        factorial1 = 1;
        factorial2 = 1;
    }
    else {
        contador++;
        factorial1 = (operando1 *= contador);
        factorial2 = (operando2 *= contador);
    }
    return factorial1;
    return factorial2;
}
