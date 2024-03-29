#ifndef CARRERA_H_INCLUDED
#define CARRERA_H_INCLUDED

#include "alumnos.h"
#include "informes.h"

typedef struct{
    int id;
    char descripcion[20];
}eCarrera;


void mostrarCarreras(eCarrera carreras[], int tam);
void mostrarCarrera(eCarrera carrera);
int cargarDescCarrera(int id, eCarrera carreras[], int tam, char desc[]);


#endif // CARRERA_H_INCLUDED
