#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

int main()
{
	srand(time(NULL));
	//implementar un GAMELOOP , el juego termina cuando no hay más balas 
	player player1; 

	//player1.init(player1.nombre, player1.posicion);

	//for (int i = 0; i < 3; i++)
	//{
	//	player1.shoot();
	//}

	panel mapa; 

	mapa.init(); 
	mapa.printPanel(); 

	
}