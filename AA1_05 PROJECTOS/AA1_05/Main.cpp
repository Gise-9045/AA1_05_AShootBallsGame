#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

int main()
{
	srand(time(NULL));
	//implementar un GAMELOOP , el juego termina cuando no hay más balas 
	player player1; 

	player1.init(player1.nombre, player1.posicion);

	//for (int i = 0; i < 3; i++)
	//{
	//	player1.shoot();
	//}

	panel mapa; 

	mapa.init();
	mapa.printPanel();

	std::cin >> player1.posicion;

	system("pause");

	mapa.insert(player1.posicion, Ball::RED);

	int verifier = mapa.verifier(player1.posicion, Ball::RED);
	mapa.printPanel();
	std::cout << std::endl;
	std::cout << verifier << std::flush;

	system("pause");
	if (verifier != -1)
	{
		mapa.deleteThree(verifier);
	}
	mapa.printPanel();

	
}