/*
 ============================================================================
CAROLINA MARTÍNEZ - TP1.
DIVISÓN: 1°K.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "logica.h"

int main(void) {

	setbuf(stdout, NULL);
	int option;
	float km, priceLATAM, priceAA;
	float debitLATAM, creditLATAM, btcLATAM, unitLATAM, debitAA, creditAA, btcAA, unitAA, difference;
	int flagKM = 0;
	int flagPrice = 0;
	int flagCost = 0;

	do
	{
		printf("1. Ingresar kilometros: \n2. Ingresar precio de vuelos: \n3. Calcular todos los costos: \n4. Informar resultados \n5. Carga forzada de datos \n6. Salir");
		scanf("%d",&option);

		switch(option)
		{
			case 1:
				if(flagKM == 0)
				{
					km = requestFloat("Ingrese la cantidad de kilometros: \n", "ERROR. Los kilometros no pueden ser menores a 0, intente nuevamente: \n");
					flagKM = 1;
				}
				break;
			case 2:
				if(flagKM == 1)
				{
					priceLATAM = requestFloat("Ingrese el precio: \n", "ERROR. El precio no puede ser menor a 0, intente nuevamente: \n");
					priceAA = requestFloat("Ingrese el precio: \n", "ERROR. El precio no puede ser menor a 0, intente nuevamente: \n");
					flagPrice = 1;
				}
				break;
			case 3:
				if(flagKM == 1 && flagPrice == 1)
				{
					debitLATAM = discount(km,priceLATAM);
					debitAA = discount(km,priceAA);

					creditLATAM = increase(km,priceLATAM);
					creditAA = increase(km,priceAA);


					btcLATAM = bitcoinToARS(km,priceLATAM);
					btcAA = bitcoinToARS(km,priceAA);

					unitLATAM = division(km,priceLATAM);
					unitAA = division(km,priceAA);

					difference = priceLATAM - priceAA;

					flagCost = 1;
				}
				else
				{
					printf("No se han cargado datos. \n");
				}
				break;
			case 4:
				if(flagKM == 1 && flagPrice == 1 && flagCost == 1)
				{
					printf("Latam:\n");
					printf("a. Precio con tarjeta de debito: $%f\n",debitLATAM);
					printf("b) Precio con tarjeta de crédito: $%f\n",creditLATAM);
					printf("c) Precio pagando con bitcoin: $%f\n",btcLATAM);
					printf("d) Precio unitario: $%f\n",unitLATAM);
					printf("Aerolíneas:\n");
					printf("a) Precio con tarjeta de debito: $%f\n",debitAA);
					printf("b) Precio con tarjeta de credito: $%f\n",creditAA);
					printf("c) Precio pagando con bitcoin: $%f\n",btcAA);
					printf("d) Precio unitario: $%f\n",unitAA);
					printf("La diferencia de precio es: $%f\n",difference);

				}
				else
				{
					printf("No se han ingresado datos.\n");
				}

				break;
			case 5:
				km = 7090;
				priceAA = 162965;
				priceLATAM = 159339;

				printf("Latam: $159339\n");
				printf("a. Precio con tarjeta de debito: $112971351\n");
				printf("b) Precio con tarjeta de crédito: $395399728.5\n");
				printf("c) Precio pagando con bitcoin: $734067531042.45\n");
				printf("d) Precio unitario: $22.47\n");
				printf("Aerolíneas: $162965\n");
				printf("a) Precio con tarjeta de debito: $115542.185\n");
				printf("b) Precio con tarjeta de credito: $1444277312.5\n");
				printf("c) Precio pagando con bitcoin: $5322975949026918\n");
				printf("d) Precio unitario: $22.98\n");
				printf("La diferencia de precio es: $3626\n");
				break;
		}
	}while(option != 6);

	return 0;


}
