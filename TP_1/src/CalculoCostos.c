/*
 * CalculoCostos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Micaela
 */
#include <stdio.h>
#include <stdlib.h>

int restar(int numA, int numB)
{
	int retorno;
	retorno= numA - numB;
	return retorno;
}
float porcentajeDescuento(float valorTotal, float porcentajeDescuento)
{
	float retorno;
	float descuento;
	descuento= valorTotal*porcentajeDescuento/100;
	retorno= valorTotal-descuento;
	return retorno;
}
float porcentajAumento(float valorTotal, float porcentajeAumento)
{
	float retorno;
	float aumento;
	aumento= valorTotal*porcentajeAumento/100;
	retorno= valorTotal+aumento;
	return retorno;
}
float pasajeUnidades(float valorTotal, float valorUnitario)
{
	float retorno;
	if(valorUnitario!=0)
	{
		retorno= valorTotal*1/valorUnitario;
	}
	else
	{
		printf("No se puede dividir por cero");
	}
	return retorno;
}
float precioUnitario(float valorTotal,float totalKm)
{
	float retorno;
	if(totalKm!=0)
		{
		 retorno=1*valorTotal/totalKm;
		}
		else
		{
			printf("No se puede dividir por cero");
		}

	return retorno;
}

