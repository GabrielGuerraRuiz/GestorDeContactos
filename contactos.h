#ifndef CONTACTOS_H
#define CONTACTOS_H

#define MAX_NOMBRE 50
#define MAX_TELEFONO 15
#define MAX_EMAIL 50

typedef struct
{
    char nombre[MAX_NOMBRE];
    int telefono[MAX_TELEFONO];
    char email[MAX_EMAIL];
} Contacto;

void mostrarMenu();

#endif