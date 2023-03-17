#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

void panel::init()  
{
	int a = 0;

	std::cout << "Which is the length of the panel?" << std::endl; 
	std::cin >> size; 
	std::cout << std::endl;
	
	panel = new Ball[size];

	while (a < size)
	{
		panel[a] = randomType();

		if(!((panel[a] == panel[a - 1]) && (panel[a] == panel[a - 2])))
		{
			a++;
		}
	}
}

void panel::insert(int position, Ball ball)
{
	int pPosition = 0; //PanelPosition
	int phPosition = 0; //Panelhelper Position

	//Crea una array para volcar todo lo que hay en panel
	Ball* panelHelper = new Ball[size];

	for (int i = 0; i < size; i++)
	{
		panelHelper[i] = panel[i];
	}

	delete[] panel;
	size++;

	panel = new Ball[size];

	/*Hace el volcado de panelHelper a panel,
	cuando se encuentra con la posición donde ha metido la bala, mete la bala en vez del volcado,
	utilizo dos variables (pPosition y phPosition) por que si solo utilizó size, 
	llegará un momento en el que panelHelper se pasa del maximo*/

	for (int i = 0; i < size; i++)
	{
		if (i == position)
		{
			panel[pPosition] = ball;
			pPosition++;
		}
		else
		{
			panel[pPosition] = panelHelper[phPosition];

			pPosition++;
			phPosition++;
		}
	}

	delete[] panelHelper; 
	panelHelper = nullptr;
}



int panel::verifier(int position, Ball ball)
{
	//Ponemos posición a - 1 para indicar que no hay 3 consecutivas
	position = -1;

	for (int i = 0; i < size; i++)
	{
		if (size >= 3 && panel[i] == panel[i - 1] && panel[i] == panel[i - 2])
		{
			//Si detecta 3 consecutivas cambia -1 por la posición
			position = i - 2;
		}
	}

	return position;
}

void panel::deleteThree(int position) 
{
	int pPosition = 0; //PanelPosition
	int phPosition = 0; //Panelhelper Position

	//Crea una array para volcar todo lo que hay en panel
	Ball* panelHelper = new Ball[size];

	for (int i = 0; i < size; i++)
	{
		panelHelper[i] = panel[i];
	}

	delete[] panel;
	size -= 3;

	panel = new Ball[size];

	//Vuelve a volcarlo a la array original pero quitando las bolas repetidas
	for (int i = 0; i < size; i++)
	{
		if (i == position)
		{
			phPosition += 3;
		}
		else
		{
			panel[pPosition] = panelHelper[phPosition];

			pPosition++;
			phPosition++;
		}
	}

	delete[] panelHelper;  // se elimina esta memoria
	panelHelper = nullptr;
}

void panel::insertThree()
{
	int a = size;

	//Crea una array para volcar todo lo que hay en panel
	Ball* panelHelper = new Ball[size];

	for (int i = 0; i < size; i++)
	{
		panelHelper[i] = panel[i];
	}

	delete[] panel;
	size += 3;

	panel = new Ball[size];

	for (int i = 0; i < size - 3; i++)
	{
		panel[i] = panelHelper[i];
	}

	delete[] panelHelper;  // se elimina esta memoria
	panelHelper = nullptr;

	//Pone 3 bolas aleatorias al final
	while (a < size)
	{
		panel[a] = randomType();

		if (!((panel[a] == panel[a - 1]) && (panel[a] == panel[a - 2])))
		{
			a++;
		}
	}


}

void panel::printPanel(player personaje)
{
	for (int i = 0; i < size; i++)
	{
		printType(panel, i);
	}

	std::cout <<"\n\n";

	for (int i = 0; i < size; i++)
	{
		if (i == personaje.posicion)
		{
			std::cout << "^" << std::endl; 
			printType(personaje.pistola, 0);
		}
		
	}
	std::cout << "\n\n"<< personaje.nombre << " score is : " << personaje.score<< "\n\n";
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