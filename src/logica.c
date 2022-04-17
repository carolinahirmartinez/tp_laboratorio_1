/*
 * logica.c
 *
 *  Created on: 16 abr. 2022
 *      Author: 54911
 */

// Función para tomar los datos tipo float y validar que son positivos.
#include <stdio.h>
#include <stdlib.h>

float requestFloat(char * message, char * error)
{
	float number;

	printf("%s",message);
	scanf("%f",&number);

	while(number < 0)
	{
		printf("%s",error);
		scanf("%f",&number);
	}

	return number;
}
// Fin de la función.

// Función que me permite calcular los costos.

/* Calcular todos los costos:
 a) Tarjeta de débito (descuento 10%)
 b) Tarjeta de crédito (interés 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)

 */

float discount(float a, float b)
{
	float total;
	total = (a * b) * 10 / 100;
	return total;
}

float increase(float a, float b)
{
	float add;
	float total;
	add = (a * b) * 25 / 100;
	total = (a * b) + add;
	return total;
}

// 4606954.55
float bitcoinToARS(float a, float b)
{
	float total;
	total = (a * b) * 4606954.55;
	return total;
}

float division(float a, float b)
{
	float total;
	total = a / b;
	return total;
}





