#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

void panel::init()
{
	int a = 0;
	//inicializa el panel con un numero aleatorio de bolas aleatorias que es leido del estandar input 
	std::cout << " Which is the length of the panel?" << std::endl; 
	std::cin >> size; 
	
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

	//Hace el volcado de panelHelper a panel
	//Cuando se encuentra con la posición donde ha metido la bala, mete la bala en vez del volcado
	//Utilizo dos variables (pPosition y phPosition) por que si solo utilizó size, llegará un momento en el que panelHelper se pasa del maximo
	for (int i = 0; i < size - 1; i++)
	{
		if (i == position)
		{
			panel[pPosition] = ball; //Aquí va la bala (NO SE SI ESTÁ BIEN)
			pPosition++;
		}
		else
		{
			panel[pPosition] = panelHelper[phPosition];

			pPosition++;
			phPosition++;
		}
	}
}

int panel::verifier(int position, Ball ball)
{
	//Ponemos posición a - 1 para indicar que no hay 3 consecutivas
	position = -1;

	for (int i = 0; i < size - 3; i++)
	{
		if (panel[i] == panel[i + 1] && panel[i] == panel[i + 2])
		{
			//Si detecta 3 consecutivas cambia -1 por la posición
			position = i;
		}
	}

	return position;
}

void panel::deleteThree(int position) 
{
	//Crea una array para volcar todo lo que hay en panel
	//POR ACABAR
	Ball* panelHelper = new Ball[size];

	for (int i = 0; i < size; i++)
	{
		panelHelper[i] = panel[i];
	}
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