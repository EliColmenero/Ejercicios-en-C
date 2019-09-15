#ifndef COLMENERO_H_INCLUDED
#define COLMENERO_H_INCLUDED

int PedirNumero();
int sumar(int numero1, int numero2);
int restar(int numero1, int numero2);
int multiplicar(int numero1, int numero2);
int factorizar(int);
void dividir(int numero1, int numero2);
void MostrarResultados();
void mostrarUnArray(int parametroArray[],int cant);
void inicializarUnArray(int parametroArray[],int cant,int inicializacion);
void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[]);
int dameElMaximo(int parametroArray[],int cant);
int dameElIndiceMaximo(int parametroArray[],int cant);
void cargarNombresTest(char array[][50], int cantidad);
void cargarApellidoTest(char array[][50], int cantidad);
void cargarEdadesTest(int array[], int cantidad);
void ordenarPorEdad(char nombres[][50], char apellidos[][50], int edades[], int tam);




#endif // COLMENERO_H_INCLUDED
