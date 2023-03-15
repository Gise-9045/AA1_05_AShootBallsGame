#include"MathContent.h"
#pragma once

struct player
{
	
	int posicion; 
	int score;
	Ball pistola[50];

	std::string nombre;
	int contadorBalas = 0;

	void init(std::string name, int position);
	Ball shoot(); 
};

Ball randomType();

void printType(Ball tablero[], int tamaño); 