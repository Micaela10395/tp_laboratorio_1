/*
 ============================================================================
 Name        : TP_1.c
 Author      : Romero Micaela
 1 Enunciado
 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas para ofrecerlos a sus clientes.
 Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
 El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utn.h"
#include "CalculoCostos.h"

int main(void) {
	setbuf(stdout,NULL);
	int opcion;
	int respuesta;
	int kilometros;
	float precioAerolineas;
	float precioLatam;
	int diferenciaPrecioIngresado;
	float descuentoDebitoLatam;
	float descuentoDebitoAerolineas;
	float incrementoCreditoLatam;
	float incrementoCreditoAerolineas;
	float precioBitLatam;
	float precioBitAerolineas;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;



	respuesta =utn_getNumero(&opcion,"Seleccione una opcion\n\n1-Ingrese km\n2-Ingresar Precio de Vuelos:\n"
			"3- Calcular todos los costos\n4-4. Informar Resultados\n5-Carga forzada de datos\n6-Salir ",
					"No es una opcion valida", 1, 6, 2);
	if (respuesta == 0)
	{
		switch (opcion)
		{
		case 1:
			printf("Ingrese kilometros");
			scanf("%d",kilometros);
			break;
		case 2:
			printf("Ingrese precio vuelo AEROLINEAS");
			scanf("%f",precioAerolineas);
			printf("Ingrese precio vuelo LATAM");
			scanf("%f",precioLatam);
			break;
		case 3:// pensar una funcion para solo llamra esta info
			//a
		    descuentoDebitoLatam=porcentajeDescuento(precioLatam,10);
		    descuentoDebitoAerolineas=porcentajeDescuento(precioAerolineas,10);
		    //b
		    incrementoCreditoLatam=porcentajeAumento(precioLatam,25);
		    incrementoCreditoAerolineas=porcentajeAumento(precioAerolineas,25);
		    //c
		    precioBitLatam=pasajeUnidades(precioLatam,4606954.55);
		    precioBitAerolineas=pasajeUnidades(precioAerolineas,4606954.55);
		    //d
            precioUnitarioLatam=precioUnitario(precioLatam,kilometros);
            precioUnitarioAerolineas=precioUnitario(precioLatam,kilometros);
			//e
			diferenciaPrecioIngresado=restar(precioLatam, precioAerolineas);
			break;
		case 4://pensar una funcion para solo llamra esta info
			printf("LATAM\n");
			printf("\nPrecio con tarjeta de debito $ %.2f",descuentoDebitoLatam);
			printf("\nPrecio con tarjeta de credito $ %.2f",incrementoCreditoLatam);
		    printf("\nPrecio pagando con bitcoin $ %.2f ", precioBitLatam);
		    printf("\nPrecio unitario  $ %.2f ",precioUnitarioLatam);

		    printf("\nAEROLINEAS");
		    printf("\nPrecio con tarjeta de debito $ %.2f",descuentoDebitoAerolineas);
		    printf("\nPrecio con tarjeta de credito $ %.2f",incrementoCreditoAerolineas);
		    printf("\nPrecio pagando con bitcoin $ %.2f ", precioBitAerolineas);
		    printf("\nPrecio unitario  $ %.2f ",precioUnitarioAerolineas);

		    //diferencia de precio
			printf("La diferencia de precio es %d",diferenciaPrecioIngresado);
			break;
		case 5:
			kilometros=7090;
			precioLatam=159339;
			precioAerolineas=162965;

			//pensar una funcion para solo llamra esta info
			descuentoDebitoLatam=porcentajeDescuento(precioLatam,10);
			descuentoDebitoAerolineas=porcentajeDescuento(precioAerolineas,10);

			incrementoCreditoLatam=porcentajeAumento(precioLatam,25);
		    incrementoCreditoAerolineas=porcentajeAumento(precioAerolineas,25);

		    precioBitLatam=pasajeUnidades(precioLatam,4606954.55);
		    precioBitAerolineas=pasajeUnidades(precioAerolineas,4606954.55);

			precioUnitarioLatam=precioUnitario(precioLatam,kilometros);
			precioUnitarioAerolineas=precioUnitario(precioLatam,kilometros);

			diferenciaPrecioIngresado=restar(precioLatam, precioAerolineas);

			printf("LATAM\n");
			printf("\nPrecio con tarjeta de debito $ %.2f",descuentoDebitoLatam);
			printf("\nPrecio con tarjeta de credito $ %.2f",incrementoCreditoLatam);
			printf("\nPrecio pagando con bitcoin $ %.2f ", precioBitLatam);
			printf("\nPrecio unitario  $ %.2f ",precioUnitarioLatam);

			printf("\nAEROLINEAS");
			printf("\nPrecio con tarjeta de debito $ %.2f",descuentoDebitoAerolineas);
		    printf("\nPrecio con tarjeta de credito $ %.2f",incrementoCreditoAerolineas);
			printf("\nPrecio pagando con bitcoin $ %.2f ", precioBitAerolineas);
			printf("\nPrecio unitario  $ %.2f ",precioUnitarioAerolineas);

			printf("La diferencia de precio es %d",diferenciaPrecioIngresado);
			break;

		}
	}
	return EXIT_SUCCESS;
}
