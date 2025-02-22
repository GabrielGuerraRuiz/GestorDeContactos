#include "contactos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Función para mostrar el menú
void mostrarMenu() {
    printf("\n--- Gestor de Contactos ---\n");
    printf("1. Agregar contacto\n");
    printf("2. Mostrar contactos\n");
    printf("3. Buscar contacto\n");
    printf("4. Eliminar contacto\n");
    printf("5. Guardar contactos\n");
    printf("6. Cargar contactos\n");
    printf("0. Salir\n");
}

// Función para eliminar un contacto
void eliminarContacto(Contacto **contactos, int *numContactos, const char *nombre){
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