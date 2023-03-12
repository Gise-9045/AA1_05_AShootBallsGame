#include"MathContent.h"
#pragma once

struct panel
{
	Bola panel;
	int size; 

	void init(); 
	void insert(int position, Bola ball);
	int  verifier(int position, Bola ball); 
	void deleteThree(int position); 
	void insertThree(); 
	void printPanel(); 
};