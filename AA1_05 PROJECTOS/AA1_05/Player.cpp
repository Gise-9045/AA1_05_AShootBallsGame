#include"MathContent.h"
#include"Player.h"

void player::init(std::string name, int position)
{

	std::cout << "Insert a name for your avatar:"; 
	std::cin >> name ; 
	nombre = name;


	std::cout << std::endl << "In which position do you want to start:";
	std::cin >> position;
	posicion = position; 

	score = 0; 

	for (int i = 0; i < 20; i++)
	{
		pistola[i] = randomType();
	}
}

Ball player::shoot()
{
	/*Dispara 1 bola, la primera que tiene. La bola se elimina del cargador y la
	funci�n la devuelve*/

	return Ball::RED;
}

Ball randomType()
{
	int result = randomNumber(0, 4); 
	switch (result)
	{
	case 0: 
		return Ball::RED;
		break; 
	case 1:
		return Ball::LILA; 
		break;
	case 2: 
		return Ball::BLUE; 
		break; 
	case 3: 
		return Ball::GREEN; 
		break; 
	case 4: 
		return Ball::YELLOW;
		break; 
	default:
		break;
	}
}

