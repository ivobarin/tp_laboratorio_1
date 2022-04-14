/*
 * calculosDePrecios.c
 *
 *  Created on: 9 abr 2022
 *      Author: Ivo_Barinstein
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculosDePrecios.h"

float calcularDescuento(float precioIngresado)
{
    float descuento;

    descuento = precioIngresado - (precioIngresado * 10/100);

    return descuento;
}

float calcularCredito (float precioIngresado)
{
	float interes;

	interes = precioIngresado + (precioIngresado * 25 /100);

	return interes;
}

float calcularBitcoin(float precioIngresado)
{
	float valorBitcoin= 4606954.55;
	float precioEnBitcoin;

	precioEnBitcoin = precioIngresado/valorBitcoin;

	return precioEnBitcoin;
}

float calcularPrecioUnitario(float ingresarPrecio, float ingresarKM)
{
	float precioUnitario;

	precioUnitario = ingresarPrecio / ingresarKM;

	return precioUnitario;
}
