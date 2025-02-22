#include "contactos.h"
#include "contactos.c"

#include "buscarContacto.h"
#include "buscarContacto.c"

#include <stdlib.h>
#include <stdio.h>

int main() {
    Contacto *contactos = NULL;
    int opcion;

    do {
        mostrarMenu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        while (getchar() != '\n'); // Limpiar buffer de entrada

        // TODO: Agregar las funciones en el switch dependiendo del menu.
        switch(opcion) {
            
            // Buscar contacto
            case 3:
                buscarContacto(contactos, 0);

            // Salir del programa
            case 0:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);

    free(contactos); // Liberar memoria al final
    return 0;
}