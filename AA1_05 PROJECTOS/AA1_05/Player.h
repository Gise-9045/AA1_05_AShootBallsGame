#include"MathContent.h"
#pragma once

struct player
{
	
	int posicion; 
	int score; 
	

	const int cargador = 20;
	int maxCargador = cargador;

	Ball* pistola = new Ball[cargador];

	std::string nombre;

	void init(std::string name, int position);
	Ball shoot(); 
};

Ball randomType();

void printType(Ball tablero[], int tamaño);