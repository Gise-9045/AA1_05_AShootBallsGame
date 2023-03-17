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
	int balasQueQuedan = 20; 

	player1.init(player1.nombre, player1.posicion);
	mapa.init();

	system("CLS");

	mapa.printPanel(player1);

	std::cout << "In which position do you want to throw a ball?" << std::endl;
	std::cin >> player1.posicion;

	while (player1.posicion >= mapa.size)
	{
		std::cout << "In which position do you want to throw a ball? (less than " << mapa.size << ")" << std::endl;
		std::cin >> player1.posicion;
	}

	system("CLS");

	while (!gameFinished)
	{
		mapa.insert(player1.posicion, player1.shoot());
		verifier = mapa.verifier(player1.posicion, player1.shoot());

	
		if (verifier != -1)
		{
			mapa.deleteThree(verifier);
			mapa.insertThree();
			player1.score += 1;
		}

		mapa.printPanel(player1);
		std::cout << "You have " << balasQueQuedan << " bullets left.\n\n"; 

		if (balasQueQuedan == 0)
		{
			system("CLS");
			std::cout << player1.nombre << ", your score is: " << player1.score << std::endl;
			gameFinished = true;
			break;
		}

		std::cout << "In which position do you want to throw a ball?" << std::endl;
		std::cin >> player1.posicion;

		while (player1.posicion >= mapa.size)
		{
			std::cout << "In which position do you want to throw a ball? (less than " << mapa.size << ")" << std::endl;
			std::cin >> player1.posicion;
		}

		balasQueQuedan--;

		system("CLS");
	}
}