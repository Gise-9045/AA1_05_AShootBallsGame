#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

int main()
{
	//implementar un GAMELOOP , el juego termina cuando no hay más balas 
	player player1; 

	player1.init(player1.nombre, player1.posicion);

	/*int tamañanocargador = 50;
	int* size = new int[tamañanocargador];

	for (int i = 0; i < 20; i++)
	{
		size[i] = randomNumber(0, 5); 
		std::cout << size[i]; 
	}*/

	srand(time(NULL));
}