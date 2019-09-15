#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Solicita números al usuario
 * \param Numero corresponde al dato numerico que le solicita al usuario
 * \return El número ingresado por el usuario
 *
 */
 int PedirNumero(){
    int numero;

        printf("\n Ingrese un numero \n");
        scanf("%d" ,&numero);

    return numero;
    }

/**
 * \brief Suma los números ingresados
 * \param Suma corresponde al resultado de la operación realizada
 * \return El resultado de la suma
 *
 */

    int sumar(int numero1, int numero2){
    int suma; //Se declara "int suma" para guardar el resultado de la operación

    suma = numero1 + numero2;

    return suma;
}

/**
 * \brief Resta los números ingresados
 * \param Resta corresponde al resultado de la operación realizada
 * \return El resultado de la resta
 *
 */

 int restar(int numero1, int numero2){
    int resta;

    resta = numero1 - numero2;

    return resta;
}

/**
 * \brief Divide los números ingresados
 * \param Cociente corresponde al resultado de la operación realizada
 * \return El resultado de la división
 *
 */

void dividir(int numero1, int numero2){
    float cociente;

    // Se realiza una prueba de error, dando aviso de que no es posible realizar la división si se ingresa un 0 en segundo término

	if(numero2 == 0){
        printf("No es posible dividir por 0 \n");
    }
    else
    {
        //Si el segundo número ingresado es distinto de 0, se realizará la operación

        cociente = (float)numero1 / (float)numero2;
        printf("El resultado de la division es %.2f \n" ,cociente);
    }
}

/**
 * \brief Multiplica los números ingresados
 * \param Producto corresponde al resultado de la operación realizada
 * \return El resultado de la multiplicación
 *
 */

 int multiplicar(int numero1, int numero2){
    int producto;

    producto = numero1 * numero2;

    return producto;
}

/**
 * \brief Calcula el factorial de cada uno de los números ingresados
 * \param Auxiliar corresponde al resultado del factorial del número ingresado
 * \return El resultado que refleje el factorial del número ingresado
 *
 */

    int factorizar(int numero){
    int auxiliar = 1;

    // Se evalúa el caso de error, de ser el número ingresado menor a 0, se imprimirá el mensaje de error

    if(numero < 0){
        printf("No es posible calcular el factorial de un numero negativo \n");
        PedirNumero();
    }

    if(numero > 0){
        auxiliar = numero * factorizar(numero - 1);

        //El factorial del número ingresado será el resultado de la multiplicación del número por el factorial de su anterior
    }

    return auxiliar;

}

/**
 * \brief Muestra los resultados de todas las operaciones realizadas
 * \param Numero1 corresponde al primer número ingresado por el usuario
 * \param Numero2 corresponde al segundo número ingresado por el usuario
 * \param Resultado corresponde al resultado a reflejar de todas las operaciones
 * \return
 *
 */
 void MostrarResultados(){

    int numero1;
	int numero2;
	int resultado;

	numero1 = PedirNumero();
	numero2 = PedirNumero();

    //Se muestran los números actuales ingresados

	printf("Los numeros ingresados son: %d y %d \n" ,numero1 ,numero2);

	//Se expresan todos los resultados de las operaciones utilizando las funciones correspondientes:

	resultado = sumar(numero1,numero2); // Se llama a la función y se le pasan los valores para operar con la misma
	printf("La suma de los numeros es %d \n" ,resultado); //Se muestra el resultado de la operación

	resultado = restar(numero1,numero2);
	printf("La resta de los numeros es %d \n" ,resultado);

	dividir(numero1, numero2);

	resultado = multiplicar(numero1,numero2);
	printf("El producto de los numeros es %d \n" ,resultado);

	resultado = factorizar(numero1);
	printf("El factorial de %d es %d \n" ,numero1 ,resultado);

	resultado = factorizar(numero2);
	printf("El factorial de %d es %d \n" ,numero2 ,resultado);

}

void mostrarUnArray(int parametroArray[],int cant){
    int indice;

    for(indice = 0; indice < cant; indice++){
        printf("\n numero: %d \n" ,parametroArray[indice]);
    }
}

void inicializarUnArray(int parametroArray[],int cant,int inicializacion){
    int indice;

        for(indice = 0; indice < cant; indice++){
            parametroArray[indice] = inicializacion;
    }
}

void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[]){
    int indice;

     for(indice = 0; indice < cant; indice++){
        printf("\n %s" ,mensaje);
        scanf("%d" ,&parametroArray[indice]);
    }
}

int dameElMaximo(int parametroArray[],int cant){
    int indice;
    int maximo;

    for(indice = 0; indice < cant; indice++)
        {
        if(parametroArray[indice] > maximo || indice == 0){
            maximo = parametroArray[indice];
        }
        }
    printf("\n El maximo es: %d \n", maximo);
    return maximo;
}

int dameElIndiceMaximo(int parametroArray[],int cant){
    int indice;
    int indiceMaximo;
    int maximo;

    for(indice = 0; indice < cant; indice++)
        {
        if(parametroArray[indice] > maximo || indice == 0){
            maximo = parametroArray[indice];
            indiceMaximo = indice;
        }
        }
        printf("\n El indice del maximo es: %d \n", indiceMaximo);

    return indiceMaximo;
}

void cargarNombresTest(char array[][50], int cantidad){
    char auxChar[][50] = {"Alfredo","Rogelio","Julieta","Pablo"};

    int i;

    for(i=0; i<cantidad; i++){
        strcpy(array[i], auxChar[i]);
    }
}}

void cargarApellidoTest(char array[][50], int cantidad){
    char auxChar[][50] = {"Mercurio", "agua", "Roberto", "McCartney"};
    int i;

    for(i=0;i<cantidad;i++){
        strcpy(array[i], auxChar[i]);
    }
}

void cargarEdadesTest(int array[], int cantidad){
    int aux[] = {22, 33, 18, 55};
    int i;

    for(i=0; i<cantidad;i++){
        array[i]=aux[i];
    }
}

//Cadenas de caracteres
void ordenarPorEdad(char nombres[][50], char apellidos[][50], int edades[], int tam){
    int i;
    int j;
    char auxNombre[20];
    char auxAp[20];
    int auxEdad;

    for(i=0; i<tam -1 ; i++){
        for(j=i+1; j<tam; j++){
            if(edades[i] > edades[j]){

                strcpy(auxNombre, nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j], auxNombre);

                strcpy(auxAp, apellidos[i]);
                strcpy(apellidos[i], apellidos[j]);
                strcpy(apellidos[j], auxAp);

                auxEdad = edades[i];
                edades[i] = edades[j];
                edades[j] = auxEdad;
            }
        }
    }
}

