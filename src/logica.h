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
 * @brief Esta función me permite tomar un dato flotante ingresado por el usuario y validar que sea positivo.
 * @param message Imprime el mensaje que se va a mostrar al usuario para solicitar el ingreso de un número.
 * @param error Imprime un mensaje que avisa al usuario que el número ingresado es inválido y debe intentar nuevamente.
 * @return Devuelve el mensaje.
 */
float requestFloat(char * message, char * error);

/***
 * @brief Esta función permite calcular el descuento del 10%.
 * @param a Primer número ingresado.
 * @param b Segundo número ingresado.
 * @return Devuelve el resultado.
 */
float discount(float a, float b);

/***
 * @brief Esta función me permite calcular el 25% de interés de un total.
 * @param a Primer número ingresado.
 * @param b Segundo número ingresado.
 * @return Devuelve el total con interés.
 */

float increase(float a, float b);

/***
 * @brief Permite dividir dos números cualesquiera.
 * @param a Primer número ingresado.
 * @param b Segundo número ingresado.
 * @return Devuelve el resultado de la división.
 */

float division(float a, float b);

/***
 * @brief Permite hacer el pasaje de bitcoins a pesos argentinos.
 * @param a Primer número ingresado.
 * @param b Segundo número ingresado.
 * @return Devuelve el total de la cuenta.
 */

float bitcoinToARS(float a, float b);





#endif /* LOGICA_H_ */
