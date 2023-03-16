#include"MathContent.h"
#pragma once

struct player
{
	
	int posicion; 
	int score; 

	int cargador = 20; 

	Ball* pistola = new Ball[cargador];  // una array de ball que puede cambiar el tamaño cuando haga shoot :) 

	std::string nombre;
	int contadorBalas = 0;

	void init(std::string name, int position);
	Ball shoot(); 
};

Ball randomType();

void printType(Ball tablero[], int tamaño);