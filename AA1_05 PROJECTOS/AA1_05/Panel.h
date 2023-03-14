#include"MathContent.h"
#pragma once

struct panel
{
	Ball *panel;
	int  size;

	player; 

	void init(); 
	void insert(int position, Ball ball);
	int  verifier(int position, Ball ball); 
	void deleteThree(int position); 
	void insertThree(); 
	void printPanel(); 
};