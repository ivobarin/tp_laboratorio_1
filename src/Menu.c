/*
 * Menu.c
 *
 *  Created on: 6 abr 2022
 *      Author: Ivo_Barinstein
 */

#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"

int menu()
{
    int opcion;
    {
        printf ("*** Menu de Opciones*** \n\n");
        printf ("1. Ingresar Kilometros: \n\n");
        printf ("2. Ingresar Precio de Vuelos: \n\n");
        printf ("3. Calcular todos los costos: \n\n");
        printf ("4. Informar Resultados: \n\n");
        printf ("5. Carga forzada de datos\n");
        printf ("6. Salir\n\n");

        printf ("Ingrese una opcion: ");
        scanf("%d", &opcion);
    }
    return opcion;
}
