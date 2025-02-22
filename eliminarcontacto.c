#include <stdlib.h>
#include <stdio.h>
#include <contactos.h>
#include <contactos.c>

void eliminarcontactos(Contacto **contactos, int *numContactos, const char *nombre){
    int encontrado = 0;
    for (int i=0; i < *numContactos; i++){
    if (strcmp ((*contactos)[i].nombre, nombre) == 0){
    encontrado =1;
    for (int j = i; j < *numContactos -1; j++){
        (*contactos)[j] = (*contactos)[j + 1];

    }
    (*numContactos)--;
    *contactos = realloc(*contactos, (*numContactos) * sizeof(contactos));
    printf("Contacto eliminado exitosamente. \n");
    break;
}
}
    if (!encontrado){
        printf("Contacto no encontrado");
    }
}