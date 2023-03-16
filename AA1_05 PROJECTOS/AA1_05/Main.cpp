#include"MathContent.h"
#include"Panel.h"
#include"Player.h"

int main()
{
	srand(time(NULL));

	player player1;
	panel mapa;

	bool gameFinished = false;
	int verifier = 0;
	int addNewBalls = 0;

	//for (int i = 0; i < 3; i++)
	//{
	//	player1.shoot();
	//}

	mapa.init();
	mapa.printPanel();

	player1.init(player1.nombre, player1.posicion);

	while (!gameFinished)
	{
		mapa.insert(player1.posicion, Ball::RED);
		verifier = mapa.verifier(player1.posicion, Ball::RED); //NO SE COMO MANDAR COLOR ALEATORIO//

		//Si detecta tres bolas juntas las elimina y suma un score
		if (verifier != -1)
		{
			mapa.deleteThree(verifier);

			player1.score += 3;
		}

		mapa.printPanel();

		addNewBalls++;

		//Cada cuatro tiradas añade 3 bolas
		if (addNewBalls >= 4)
		{
			mapa.insertThree();
			addNewBalls = 0;
		}

		system("CLS");

		if (mapa.size <= 0)
		{
			std::cout << player1.nombre << ", your score is" << player1.score << std::endl;
			gameFinished = true;
			break;
		}

		std::cout << "In which position do you want to throw a ball?" << std::endl;
		std::cin >> player1.posicion;

	}





	//PRUEBAS
	//std::cin >> player1.posicion;

	//system("pause");

	//mapa.insert(player1.posicion, Ball::RED);

	//int verifier = mapa.verifier(player1.posicion, Ball::RED);
	//mapa.printPanel();
	//std::cout << std::endl;
	//std::cout << verifier << std::flush;

	//system("pause");
	//if (verifier != -1)
	//{
	//	mapa.deleteThree(verifier);
	//}
	//mapa.printPanel();


	
}