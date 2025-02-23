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

// Función para buscar un contacto
char nombre[50], email[50];
int opcion, telefono, exito = 0;
void buscarContacto(Contacto *contactos, int numContactos){

    printf("\nSeleccione: \n");
    printf("1. Buscar por nombre\n");
    printf("2. Buscar por email\n");
    printf("3. Buscar por telefono\n");

    scanf("%d", &opcion);
    while(getchar() != '\n');

    switch (opcion){

        case 1:
            printf("\n Ingrese el nombre a buscar: ");
            scanf("%s", nombre);
            exito = 0;
            
            for (int i = 0; i < numContactos; i++){
                if (strcmp(contactos[i].nombre, nombre) == 0){
                    printf("  Contacto encontrado exitosamente.");
                    printf("\n   Nombre: %s\n", contactos[i].nombre);
                    printf("\n   Email: %s\n", contactos[i].email);
                    printf("\n   Telefono: %d\n", (int)contactos[i].telefono);
                    exito = 1;
                }
            }
            if(exito == 0){
                printf("\n  Datos no encontrados.\n\n");
            }
        break;


        case 2:
            printf("\n Ingrese el email a buscar: ");
            scanf("%s", email);
            int exito = 0;

            for (int i = 0; i < numContactos; i++){
                if (strcmp(contactos[i].email, email) == 0){
                    printf("   Contacto encontrado exitosamente.");
                    printf("\n  Nombre: %s\n", contactos[i].nombre);
                    printf("\n  Email: %s\n", contactos[i].email);
                    printf("\n  Telefono: %d\n", (int)contactos[i].telefono);
                    exito = 1;
                }   
            }
            if(exito == 0){
                printf("\n  Datos no encontrados.\n\n");
            }
        break;


        case 3:
            printf("\n Ingrese el telefono a buscar: ");
            scanf("%d", &telefono);
            int exito = 0;
            for (int i = 0; i < numContactos; i++){
                if (contactos[i].telefono == telefono){
                    printf("   Contacto encontrado exitosamente.");
                    printf("\n  Nombre: %s\n", contactos[i].nombre);
                    printf("\n  Email: %s\n", contactos[i].email);
                    printf("\n  Telefono: %d\n", (int)contactos[i].telefono);
                    exito = 1;
                }
            }

            if(exito == 0){
                printf("\n  Datos no encontrados.\n\n");
            }
        break;
    

    default:
    printf("\n opcion no valida.\n");

        break;
    }
}