// Make Rock Scissor Paper Game
// 1. Set menu
// 2. pick one from Rock Scissor Paper
// 3. Ai pick one of them
// 4. Compare between two and pick winner
// 5. End program

#include <iostream>
#include <time.h>

enum RSC
{
	RSC_R = 1,  // rock
	RSC_C,		// scissor
	RSC_P,		// paper
	RSC_END
};


using namespace std;



int main()
{
	//Menu with create random number

	// random number through time variable
	srand((unsigned int)time(0));

	int iPlayer;  // Player
	int iAi; // Ai

	while (true)
	{
		

		//Menu
		cout << " 1. rock " << endl;
		cout << " 2. scissor " << endl;
		cout << " 3. paper " << endl;
		cout << " 4. End Game " << endl;

		cin >> iPlayer; // player type number

		//exception
		if (iPlayer < RSC_R || iPlayer > RSC_END)
		{
				continue;
		}
		if (iPlayer == 4)
		{
			cout << " Game End. " << endl;
			break;
		}

		// Random number 1~3
		iAi = rand() % 3 + 1; 

		switch (iAi)
		{
		case RSC_R:  // 1
			cout << " Ai : Rock" << endl;
			break;
		case RSC_C:  // 1
			cout << " Ai : Scissor" << endl;
			break;
		case RSC_P:  // 1
			cout << " Ai : Paper" << endl;
			break;
		}

		if (iPlayer == iAi)
		{
			cout << "Draw " << endl;
		}
		else if ((iPlayer - iAi) ==-1 || (iPlayer - iAi) == 2)
		{
			cout << "player Won." << endl;
		}
		else
		{
			cout << "Ai Won." << endl;
		}

		
		system("pause");

	}

	


	return 0;

}


