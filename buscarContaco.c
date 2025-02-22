#include <stdlib.h>
#include <stdio.h>

#include "contactos.h"
#include "buscarContacto.h"

int opcion, telefono;
char nombre, email;

void buscarContacto(Contacto *contactos, int numContactos){

    printf("Seleccione: \n");
    print("1. Búscar por nombre");
    print("2. Búscar por email");
    print("3. Búscar por telefono");

    scanf("%d", &opcion);

    if(opcion == 1){
        printf("\n Ingrese el nombre a buscar");
        scanf("%c", &nombre);
        porNombre(nombre);
    }

    if(opcion == 2){
        printf("\n Ingrese el email a buscar");
        scanf("%c", &email);
        porEmail(email);
    }

    if(opcion == 3){
        printf("\n Ingrese el telefono a buscar");
        scanf("%d", &telefono);
        porNombre(telefono);
    }

    else{
        printf("\n opción no valida.")
    }



    void porNombre(char nombre){
        
    }

    void porEmail(char Email){

    }

    void porTelefono(char Telefono){

    }
}