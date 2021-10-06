/*
 * hardcodeo.c
 *
 *  Created on: 6 oct. 2021
 *      Author: Asus
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "hardcodeo.h"

int idMarca[7] = {1002,1000,1001,1003,1000,1001,1001};

int idViaje[7] = {104,102,100,102,104,101,100};

int patente[7] = {676888,456009,875980,567000,4578,9986,125};

int asientos[7] = {10,50,255,80,65,357,225};

int modelo[7] = {2015,2018,2005,2021,1990,1999,2008};

eFecha fecha[7] =
{
    {20,4,2021},
    {22,7,2020},
    {7,11,2019},
    {8,8,2021},
	{20,4,2020},
	{22,10,2017},
	{17,1,2018},
};

int hardcodearAviones(eAviones aviones[], int tam, int cant, int* pId){

    int cantidad = 0;

    if(aviones != NULL && tam > 0 && cant >= 0 && cant <= tam && pId != NULL){

        for(int i = 0; i < cant; i++){

                aviones[i].idAvion = *pId;
                (*pId)++;
                aviones[i].matricula = patente[i];
                aviones[i].idMarca = idMarca[i];
                aviones[i].idViaje = idViaje[i];
                aviones[i].modelo = modelo[i];
                aviones[i].cantAsientos = asientos[i];
                aviones[i].fecha = fecha[i];
                aviones[i].isEmpty = 0;
                cantidad++;
        }
        cantidad++;
    }

    return cantidad;
}
