#include "contactos.h"
#include "contactos.c"
#include <stdlib.h>
#include <stdio.h>

int main() {
    Contacto *contactos = NULL;
    int numContactos = 0;
    int opcion;

    do {
        mostrarMenu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        while (getchar() != '\n'); // Limpiar buffer de entrada

        // TODO: Agregar las funciones en el switch dependiendo del menu.
        switch(opcion) {
            case 1:
                // Implementar agregarContacto()
                break;
            case 2:
                // Implementar mostrarContactos()
                break;
            case 3:
                buscarContacto(contactos, 0);
                break;
            
            case 4: {
                char nombre[100];
                printf("Ingrese el nombre del contacto a eliminar: ");
                fgets(nombre, sizeof(nombre), stdin);
                nombre[strcspn(nombre, "\n")] = '\0';
                eliminarContacto(&contactos, &numContactos, nombre);
                break;
              
            }
            case 5:
                // Implementar guardarContactos()
                break;
            case 6:
                // Implementar cargarContactos()
                break;
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