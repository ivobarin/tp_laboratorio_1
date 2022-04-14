/*
 * Validacion.c
 *
 *  Created on: 9 abr 2022
 *      Author: Ivo_Barinstein
 */

#include <stdio.h>
#include <stdlib.h>
#include "Validacion.h"

void confirmarSalida(char* p)
{
    printf ("Desea cerrar el programa? (si = s//no = n): ");
    fflush (stdin);
    scanf ("%c", p);
}


