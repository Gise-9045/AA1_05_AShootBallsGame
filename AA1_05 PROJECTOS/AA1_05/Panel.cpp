#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

void panel::init()
{
	//inicializa el panel con un numero aleatorio de bolas aleatorias que es leido del estandar input
	int a; 
	std::cout << " which mas length of the panel?" << std::endl; 
	std::cin >> a; 
	
	size = randomNumber(1, a); 
	panel = new Ball[size];

	
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

}