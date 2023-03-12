#include"MathContent.h"
#pragma once

struct gun
{
	Ball balas; 
};

struct player
{
	int posicion; 
	int score;
	gun pistola[50]; 

	void init(std::string name, int position);
	Ball shoot(); 
};
