/*
 * Color.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Color.h"
#include "Tipo.h"
#include "Bicicleta.h"
#include "Trabajo.h"
#include "utn.h"

int initColores(Color listColores[], int size)
{
	int i;
	int ret= ERROR;
	if(listColores != NULL && size > ZERO)
	{
			for(i = ZERO; i < size; i++)
			{
				listColores[i].isEmpty = 1;
			}
			ret = OK;
	}
	return ret;
}
void printColor(Color color){
	printf("Id/Descripci�n: %d ->  %s\n",color.id,color.descripcion);
}

int printColores(Color listColores[], int size)
{
	printf("********** SECCI�N MOSTRAR COLORES **********\n");
	int i;
	int ret = ERROR;
	if (listColores != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			if(!listColores[i].isEmpty)
			{
				printColor(listColores[i]);
				ret = OK;
			}
		}
	}
	printf("********** FIN SECCI�N MOSTRAR COLORES **********\n");
	return ret;
}
