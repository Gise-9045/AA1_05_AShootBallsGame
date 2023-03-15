#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

void panel::init()
{
	int a = 0;
	//inicializa el panel con un numero aleatorio de bolas aleatorias que es leido del estandar input 
	std::cout << " which is the length of the panel?" << std::endl; 
	std::cin >> size; 
	
	panel = new Ball[size];

	while (a < size)
	{
		panel[a] = randomType();

		if (panel[a] != panel[a - 1] && panel[a] != panel[a - 2])
		{
			a++;
		}

	}

}

void panel::insert(int position, Ball ball)
{
	panel[position] = ball; 
}

int panel::verifier(int position, Ball ball)
{
	return 0; 
}

void panel::deleteThree(int position) 
{

}

void panel::insertThree()
{
	
}

void panel::printPanel()
{
	for (int i = 0; i < size; i++)
	{
		printType(panel, i);
	}
}

void printType(Ball tablero[], int tamaño)
{
	switch (tablero[tamaño])
	{
	case Ball::RED:
		std::cout << "R ";
		break; 
	case Ball::LILA: 
		std::cout << "L ";
		break;
	case Ball::BLUE:
		std::cout << "B "; 
		break; 
	case Ball::GREEN: 
		std::cout << "G "; 
		break; 
	case Ball::YELLOW: 
		std::cout << "Y "; 
		break; 
	default: 
		break; 
	}
}