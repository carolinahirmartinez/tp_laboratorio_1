/*
 * logica.h
 *
 *  Created on: 16 abr. 2022
 *      Author: 54911
 */
#include <stdio.h>
#include <stdlib.h>
#ifndef LOGICA_H_
#define LOGICA_H_

/***
 * @brief Esta funci�n me permite tomar un dato flotante ingresado por el usuario y validar que sea positivo.
 * @param message Imprime el mensaje que se va a mostrar al usuario para solicitar el ingreso de un n�mero.
 * @param error Imprime un mensaje que avisa al usuario que el n�mero ingresado es inv�lido y debe intentar nuevamente.
 * @return Devuelve el mensaje.
 */
float requestFloat(char * message, char * error);

/***
 * @brief Esta funci�n permite calcular el descuento del 10%.
 * @param a Primer n�mero ingresado.
 * @param b Segundo n�mero ingresado.
 * @return Devuelve el resultado.
 */
float discount(float a, float b);

/***
 * @brief Esta funci�n me permite calcular el 25% de inter�s de un total.
 * @param a Primer n�mero ingresado.
 * @param b Segundo n�mero ingresado.
 * @return Devuelve el total con inter�s.
 */

float increase(float a, float b);

/***
 * @brief Permite dividir dos n�meros cualesquiera.
 * @param a Primer n�mero ingresado.
 * @param b Segundo n�mero ingresado.
 * @return Devuelve el resultado de la divisi�n.
 */

float division(float a, float b);

/***
 * @brief Permite hacer el pasaje de bitcoins a pesos argentinos.
 * @param a Primer n�mero ingresado.
 * @param b Segundo n�mero ingresado.
 * @return Devuelve el total de la cuenta.
 */

float bitcoinToARS(float a, float b);





#endif /* LOGICA_H_ */
