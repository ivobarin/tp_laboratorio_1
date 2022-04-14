/*
 * calculosDePrecios.h
 *
 *  Created on: 9 abr 2022
 *      Author: Ivo_Barinstein
 */

#ifndef CALCULOSDEPRECIOS_H_
#define CALCULOSDEPRECIOS_H_



#endif /* CALCULOSDEPRECIOS_H_ */
/**@brief calcula el descuento del 10% de la tarjeta de debito usando el parametro precioIngresado
 *
 * @param float precioIngresado
 * @return retorna el descuento ya calculado
 */
float calcularDescuento(float precioIngresado);

/**@brief calcula el 25% de interes de la tarjeta de credito usando el parametro precioIngresado
 *
 * @param float precioIngresado
 * @return retorna el aumento ya calculado
 */
float calcularCredito (float precioIngresado);

/**@brief asigna una variable con el precio del Bitcoin y lo divide por el precio ingresado por el usuario
 *
 * @param float precioIngresado
 * @return retorna el precio del Bitcoin
 */
float calcularBitcoin(float precioIngresado);

/**@brief calcula el precio por kilometros, dividiendo entre los parametros ingresarprecio e ingresarKM
 *
 * @param ingresarPrecio
 * @param ingresarKM
 * @return retorna el precio por Kilometros
 */
float calcularPrecioUnitario(float ingresarPrecio, float ingresarKM);
