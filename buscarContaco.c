#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "contactos.h"
#include "buscarContacto.h"

int opcion, telefono;
char nombre[50], email[50];

void buscarContacto(Contacto *contactos, int numContactos){

    printf("Seleccione: \n");
    printf("1. Búscar por nombre");
    printf("2. Búscar por email");
    printf("3. Búscar por telefono");

    scanf("%d", &opcion);
    while(getchar() != '\n');

    switch (opcion){

        case 1:
            printf("\n Ingrese el nombre a buscar");
            scanf("%s", nombre);
            
            for (int i = 0; i < numContactos; i++){
                if (strcmp(contactos[i].nombre, nombre) == 0){
                    printf("Contacto encontrado exitosamente.");
                    printf("Nombre: %s\n", contactos[i].nombre);
                    printf("Email: %s\n", contactos[i].email);
                    printf("Telefono: %d\n", (int)contactos[i].telefono);
                }
            }
        break;


        case 2:
            printf("\n Ingrese el email a buscar");
            scanf("%s", email);
        break;


        case 3:
            printf("\n Ingrese el telefono a buscar");
            scanf("%d", &telefono);
        break;
    

    default:
    printf("\n opcion no valida.\n");

        break;
    }
}