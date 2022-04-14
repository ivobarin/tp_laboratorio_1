/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Ivo Barinstein
 Version     : 0.1
 Copyright   : Your copyright notice
 Description : Trabajo Practico Nro 1, por Ivo Barinstein
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Menu.h"
#include "Validacion.h"
#include "calculosDePrecios.h"

int main(void)
{
    setbuf (stdout, NULL);
    char salir ='n';
    float kilometros;
    int banderaKilometros=0;
    char aerolineas;

    float precioAerolineas=0;
    float precioLatam=0;
    float aerolineasDebito;
    float latamDebito;
    float aerolineasCredito;
    float latamCredito;
    float aerolineasBTC;
    float latamBTC;
    float aerolineasUnitario;
    float latamUnitario;
    float diferenciaPrecio;
    int  flagCalculos=0;

    do
    {
        switch (menu())
        {
        case 1:
            printf ("Por favor, ingrese la cantidad de kilometros: ");
            scanf ("%f", &kilometros);
            if (kilometros <= 0)
            {
            	printf ("\nPor favor reingrese el valor de los kilometros\n\n");
            }
            banderaKilometros=1;
            break;

        case 2:
            if (banderaKilometros==0)
            {
                printf ("No se olvide de indicar la cantidad de kilometros primero!\n\n");
                break;
            }
            else
            {
                if (banderaKilometros==1)
                    printf ("Kilometros Ingresados: %.2f \n\n", kilometros);
            }
            do
            {
                printf("Por favor, seleccione el tipo de vuelo: Latam y Aerolineas (debe indicar el precio de ambos vuelos!)\nIngrese la letra [z] para seleccionar Latam, o la letra [y] para Aerolineas: ");
                fflush (stdin);
                scanf("%c", &aerolineas);
                aerolineas = tolower(aerolineas);
            }
            while(aerolineas!='z' && aerolineas!='y');

            switch (aerolineas)
            {
            case 'y':
                printf ("Indique el precio del vuelo Aerolineas: ");
                scanf ("%f", &precioAerolineas);
                break;
            case 'z':
                printf ("Indique el precio del vuelo Latam: ");
                scanf ("%f", &precioLatam);
                break;
            default:
                printf("opcion invalida, vuelva a ingresar su opcion!\n\n");
            }
            break;

        case 3:
            if (precioAerolineas<=0 && precioLatam<=0)
            {
                printf("Error, debe ingresar el precio del vuelo Aerolineas y del vuelo Latam para calcular los costos!\n\nDebe indicar el precio de ambos vuelos (no puede ser precio = 0)!\n\npresione [2] en el menu de opciones para ingresar precio del vuelo\n");
                break;
            }
            if (precioAerolineas<=0)
            {
                printf("Error, debe ingresar el precio del vuelo Aerolineas primero para calcular ambos costos (el precio de Aerolineas no puede ser = 0)!\n\nDebe indicar el precio de ambos vuelos!// presione [2] en el menu de opciones para ingresar precio del vuelo\n");
                break;
            }
            else
            {
                printf("Precio del vuelo Aerolineas: $%.2f\n", precioAerolineas);
            }
            if (precioLatam<=0)
            {
                printf("Error, debe ingresar el precio del vuelo Latam primero para calcular ambos costos(el precio de Latam no puede ser = 0)!\n\nDebe indicar el precio de ambos vuelos!// presione [2] en el menu de opciones para ingresar precio del vuelo\n");
                break;
            }
            else
            {
                printf("Precio del vuelo Latam: $%.2f\nKilometros Ingresados: %.2f \n\n",precioLatam, kilometros);
            }

            aerolineasDebito = calcularDescuento(precioAerolineas);
            latamDebito = calcularDescuento(precioLatam);
            aerolineasCredito = calcularCredito(precioAerolineas);
            latamCredito = calcularCredito(precioLatam);
            aerolineasBTC = calcularBitcoin(precioAerolineas);
            latamBTC = calcularBitcoin(precioLatam);
            aerolineasUnitario = calcularPrecioUnitario(precioAerolineas,kilometros);
            latamUnitario = calcularPrecioUnitario (precioLatam,kilometros);
            diferenciaPrecio = precioLatam - precioAerolineas;
            flagCalculos = 1;

            printf("Los calculos de costo se han realizado correctamente!\n\nPrecione [4] en el menu para informar los resultados.\n");
            break;
        case 4:
        	if (flagCalculos == 0)
        	{
        		printf("Error, los calculos de costo no sean podido realizar. Por favor, vuelva a calcular los costos\n\nPresione [3] en el menu de opciones para calcular todos los costos\n");
        		break;
        	}
        	else
        	{
        		printf("Kms Ingresados: %.2f Kms \n\n", kilometros);
        		printf("Precio Latam: $%.2f\na) Precio con tarjeta de debito: $%.2f\nb) Precio con tarjeta de credito: $%.2f\nc) Precio pagando con bitcoin: %f BTC\nd) Precio unitario: $%.2f\n", precioLatam, latamDebito, latamCredito, latamBTC, latamUnitario);
        		printf("Precio Aerolineas Argentinas: $%.2f\na) Precio con tarjeta de débito: $%.2f\nb) Precio con tarjeta de crédito: $%.2f\nc) Precio pagando con bitcoin: %f BTC\nd) Precio unitario: $%.2f\n", precioAerolineas, aerolineasDebito, aerolineasCredito, aerolineasBTC, aerolineasUnitario);
        		printf("La diferencia de precio es de $%.2f\n\n", diferenciaPrecio);
        	}
        	break;
        case 5:
        	if(flagCalculos == 1)
        	{
        		printf("Error, los calculos de costo ya han sido verificados.\n\nPara informar los resultados, presione [4] en el menu de opciones\n");
        		break;
        	}
        	else
        	{
        		kilometros = 7090;
        		precioAerolineas = 162965;
        		precioLatam = 159339;
        		aerolineasDebito = calcularDescuento(precioAerolineas);
        		latamDebito = calcularDescuento(precioLatam);
        		aerolineasCredito = calcularCredito(precioAerolineas);
        		latamCredito = calcularCredito(precioLatam);
        		aerolineasBTC = calcularBitcoin(precioAerolineas);
        		latamBTC = calcularBitcoin(precioLatam);
        		aerolineasUnitario = calcularPrecioUnitario(precioAerolineas,kilometros);
        		latamUnitario = calcularPrecioUnitario (precioLatam,kilometros);
        		diferenciaPrecio = precioLatam - precioAerolineas;
        		printf("\nKms Ingresados: %.2f Kms \n\nPrecio Aerolineas Argentinas: $%.2f\na) Precio con tarjeta de debito: $%.2f \nb) Precio con tarjeta de credito: $%.2f \nc) Precio pagando con bitcoin: %f BTC \nd) Precio unitario: $%.2f \n\nPrecio Latam: $%.2f\na) Precio con tarjeta de debito: $%.2f \nb) Precio con tarjeta de credito: $%.2f \nc) Precio pagando con bitcoin: %f BTC \nd) Precio unitario: $%.2f \n\nLa diferencia de precio es de $%.2f\n\n",kilometros, precioAerolineas, aerolineasDebito,aerolineasCredito,aerolineasBTC, aerolineasUnitario, precioLatam, latamDebito, latamCredito, latamBTC, latamUnitario, diferenciaPrecio);
        		break;
        	}
			break;
        case 6:
            confirmarSalida(&salir);
            salir = tolower(salir);
            break;
        default:
            printf("opcion invalida, vuelva a ingresar su opcion!\n\n");
        }
        system ("pause");
    }
    while (salir != 's');

    printf ("Gracias por utilizar el sistema\n\nHasta luego!!!\n");

    return EXIT_SUCCESS;
}


