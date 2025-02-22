#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "contactos.h"
#include "buscarContacto.h"

int opcion, telefono, exito = 0;
char nombre[50], email[50];

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
            /*
            for (int i = 0; i < numContactos; i++){
                if (contactos[i].telefono == telefono){
                    printf("Contacto encontrado exitosamente.");
                    printf("\nNombre: %s\n", contactos[i].nombre);
                    printf("\nEmail: %s\n", contactos[i].email);
                    printf("\nTelefono: %d\n", (int)contactos[i].telefono);
                    int exito = 0;
                }
                if(exito == 0){
                    printf("\n\nDatos no encontrados.\n\n");
            }
                
            }
            */
           
        break;
    

    default:
    printf("\n opcion no valida.\n");

        break;
    }
}