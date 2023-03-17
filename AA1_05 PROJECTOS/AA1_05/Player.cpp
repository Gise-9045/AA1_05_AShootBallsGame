#include"MathContent.h"
#include"Player.h"

void player::init(std::string name, int position)
{

	std::cout << "Insert a name for your avatar:"; 
	std::cin >> name ; 
	nombre = name;


	position = 0; 
	posicion = position; 

	score = 0; 

	for (int i = 0; i < cargador; i++)
	{
		pistola[i] = randomType();	
	}
}


Ball player::shoot()
{
	Ball bala = pistola[0]; 

	for (int i = 1; i < cargador; i++)
	{
		pistola[i-1] = pistola[i]; 
	}

	pistola[cargador - 1] = bala; 

	return bala;
}


Ball randomType()  // crea el tipo de bola y la devuevle la bola que toca 
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
	}; 
}

