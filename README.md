# GestorDeContactos
# Indice
#archivos


Este es un programa en C para gestionar contactos, con funcionalidades para agregar, mostrar, buscar y eliminar contactos.<p>
El Gestor de Contactos es una aplicación de línea de comandos que permite a los usuarios gestionar una lista de contactos.<br> 
Las funcionalidades incluyen agregar nuevos contactos, mostrar todos los contactos, buscar un contacto específico por su nombre y eliminar contactos. También permite guardar y cargar contactos desde un archivo, lo que facilita la persistencia de los datos.

## [Archivos](archivos) 

- `contactos.h`: Archivo de cabecera que contiene la definición de la estructura `Contacto` y las declaraciones de las funciones.
- `contactos.c`: Archivo de implementación que contiene las definiciones de las funciones.
- `main.c`: Archivo principal que contiene la lógica del programa y el menú de opciones.

## Funcionalidades

1. **Agregar Contacto**: Permite agregar un nuevo contacto.
2. **Mostrar Contactos**: Muestra todos los contactos guardados.
3. **Buscar Contacto**: Permite buscar un contacto por nombre.
4. **Eliminar Contacto**: Permite eliminar un contacto por nombre.
5. **Guardar Contactos**: Permite guardar los contactos en un archivo.
6. **Cargar Contactos**: Permite cargar los contactos desde un archivo.
7. **Salir**: Salir del programa.

## Uso
Este código es la implementación de las funciones declaradas en **contactos.h**.
```sh
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
```
Muestra un menú con opciones del programa.

```sh
void eliminarContacto(Contacto **contactos, int *numContactos, const char *nombre){
    int encontrado = 0;
    for (int i=0; i < *numContactos; i++){
        if (strcmp((*contactos)[i].nombre, nombre) == 0){
            encontrado = 1;
            for (int j = i; j < *numContactos - 1; j++){
                (*contactos)[j] = (*contactos)[j + 1];
            }
            (*numContactos)--;
            *contactos = realloc(*contactos, (*numContactos) * sizeof(Contacto));
            printf("Contacto eliminado exitosamente. \n");
            break;
        }
    }
    if (!encontrado){
        printf("Contacto no encontrado\n");
    }
}
```
 Elimina un contacto con base a su nombre.<p>
Pasos:<p>

Busca el contacto por nombre en el arreglo.<br>
Si lo encuentra:<br>
Recorre los contactos para sobrescribir la posición eliminada.<br>
Reduce numContactos.<br>
Usa **realloc()** para redimensionar la memoria.
Si no lo encuentra, imprime **"Contacto no encontrado"**.

## Instrucciones para Compilar y Ejecutar

Para compilar el programa, utiliza el siguiente comando:

```sh
gcc main.c contactos.c -o gestor_contactos
```

Para ejecutar el programa

```sh

[probando]

./gestor_contactos
```


[probando]

