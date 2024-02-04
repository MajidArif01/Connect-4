#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include <time.h>
#include<cstdlib>
#include<Windows.h>

using namespace std;

//STARTING PACKAGE



void start()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int k = 3;
	// pick the colorattribute k you want
	SetConsoleTextAttribute(console, k);
	cout << "              *             " << endl;
	cout << "             * *            " << endl;
	cout << "            *  *            " << endl;
	cout << "           *   *            " << endl;
	cout << "          *    *            " << endl;
	cout << "         *     *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "               *            " << endl;
	cout << "       * * * * * * * * *    " << endl;
	cout << "       * * * * * * * * *    " << endl;
}

void start2()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int k = 5;
	// pick the colorattribute k you want
	SetConsoleTextAttribute(console, k);
	cout << "           * * * * * * *    " << endl;
	cout << "         *               *  " << endl;
	cout << "       *                   *  " << endl;
	cout << "      *                      * " << endl;
	cout << "      *                       *" << endl;
	cout << "                              *" << endl;
	cout << "                             *" << endl;
	cout << "                           *" << endl;
	cout << "                         *" << endl;
	cout << "                       *" << endl;
	cout << "                     *" << endl;
	cout << "                   *" << endl;
	cout << "                 *" << endl;
	cout << "               *" << endl;
	cout << "             *" << endl;
	cout << "           *" << endl;
	cout << "         *" << endl;
	cout << "       *" << endl;
	cout << "       * * * * * * * * * * * * *";
	cout << "";
	cout << "";
	cout << "";
}

void start3()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int k = 1;
	// pick the colorattribute k you want
	SetConsoleTextAttribute(console, k);
	cout << "       * * * * * *          " << endl;
	cout << "     *             *        " << endl;
	cout << "   *                 *      " << endl;
	cout << "                      *     " << endl;
	cout << "                      *    " << endl;
	cout << "                      *    " << endl;
	cout << "                    *       " << endl;
	cout << "                  *         " << endl;
	cout << "                *           " << endl;
	cout << "    * * * * * *             " << endl;
	cout << "    * * * * * *             " << endl;
	cout << "                *           " << endl;
	cout << "                  *         " << endl;
	cout << "                    *       " << endl;
	cout << "                      *     " << endl;
	cout << "                      *     " << endl;
	cout << "                      *     " << endl;
	cout << "   *                 *      " << endl;
	cout << "     *             *        " << endl;
	cout << "       * * * * * *          " << endl;

}

void start4()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int k = 4;
	// pick the colorattribute k you want
	SetConsoleTextAttribute(console, k);
	cout << endl << endl << endl << endl;
	cout << " *         * * *   * * * * *    * * * *     " << endl;
	cout << " *         *           *        *           " << endl;
	cout << " *         * * *       *        * * * *     " << endl;
	cout << " *         *           *              *     " << endl;
	cout << " * * * *   * * *       *        * * * *     " << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << "                                         *  " << endl;
	cout << "  * * *    *             *       *   *   *  " << endl;
	cout << "  *    *   *            * *       * *    *  " << endl;
	cout << "  * * *    *           * * *       *     *  " << endl;
	cout << "  *        *          *     *      *        " << endl;
	cout << "  *        * * * *   *       *     *     *  " << endl;
	cout << "                                            " << endl;

}


void LetItStart()
{
	system("CLS");
	Sleep(500);
	start3();
	Sleep(1500);
	system("cls");
	start2();
	Sleep(1500);
	system("cls");
	start();
	Sleep(1500);
	system("cls");
	start4();
	Sleep(1500);
	system("cls");

}

//Starting PACKAGE







//for checking
//checking diagonally,horizontally and vertically

bool check(char arr[8][8])
{
	bool flag = 0;
	for (int i = 0; i < 8 && flag == 0; i++)
	{
		for (int j = 0; j < 8 && flag == 0; j++)
		{
			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i - 1][j] && arr[i][j] == arr[i - 2][j] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i - 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 3][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][j] == arr[i - 1][j] && arr[i][j] == arr[i - 3][j] && arr[i][j] == arr[i - 2][j] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j - 1] && arr[i][j] == arr[i][j + 2] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j - 1] && arr[i][j] == arr[i][j - 2] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			/*else if (arr[i][j] == arr[i][j - 1] && arr[i][j] == arr[i][j - 2] && arr[i][j] == arr[i][j - 3] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}*/

			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] && arr[i][j] == arr[i][j + 3] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2] && arr[i][j] == arr[i + 3][j + 3] && arr[i][j] != '-')
			{
				if (arr[i][j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}

			else if (arr[i][7 - j] == arr[i + 1][6 - j] && arr[i][7 - j] == arr[i + 2][5 - j] && arr[i][7 - j] == arr[i + 3][4 - j] && arr[i][7 - j] != '-')
			{
				if (arr[i][7 - j] == 'A')
				{
					cout << "Player A Wins!\n";
				}
				else if (arr[i][7 - j] == 'B')
				{
					cout << "Player B Wins!\n";
				}
				flag = 1;
				break;
			}
		}
	}
	return flag;
}







//selecting game mode

int game_type()
{
	int choice;
	cout << "1 for play and 0 for back\n";
	cin >> choice;
	return choice;
}


// toss

bool toss()
{
	int toss;
	srand(time(0));
	toss = rand() % 2;
	return toss;
}



// for player turn
//assigning the turn + changing the values A TO B
char player(int n)
{
	char player;

	//static because we want this value to remain

	static int count = n;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	if (count % 2 == 0)
	{
		int i = 9;
		SetConsoleTextAttribute(console, i);

		cout << "player 1 turn ";
		player = 'A';
		count++;
	}
	else
	{
		int i = 6;
		SetConsoleTextAttribute(console, i);
		cout << "player 2 turn ";
		player = 'B';
		count++;
	}
	return player;
}


// playing game

void  play_game(int choice)
{


	if (choice == 1)
	{
		LetItStart();
		char ply;
		char arr[8][8];
		HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		
		// pick the colorattribute k you want
		
		for (int i = 0; i < 8; i++)       //for making the grid
		{
			for (int j = 0; j < 8; j++)
			{
				arr[i][j] = '-';
				cout << setw(6) << arr[i][j] << "   ";
			}
			cout << endl;
		}

		
		bool flag = 0;
		int col;
		int descion;
		descion = toss();
		for (int i = 0; i <= 64; i++)
		{
			SetConsoleTextAttribute(console, 14);
			if (i == 64)
			{
				cout << "\nthe game is drawn\n\n";
				break;
			}
			if (flag == 1)
			{
				cout << "\n\nGAME ENDED\n\n";
				break;
			}
			if (i < 64)
			{

				ply = player(descion);
				cout << "enter the columb ";
				cin >> col;
				
				for (int j = 7; j >= -1; j--)
				{
					
					if (arr[j][col] == '-')
					{


						arr[j][col] = ply;
						system("cls");
						flag = check(arr);

						for (int k = 0; k < 8; k++)   //displaying
						{
							
							for (int h = 0; h < 8; h++)
							{
								cout << setw(6) << arr[k][h] << "  ";
							}
							cout << endl;
						}
						break;
					}
					else if (j == -1)
					{
						cout << "invalid move\nyou lost your turn\n";
						i--;

					}
				}
			}
		}
	}
	else
	{
		return;
	}
}





// credits

void credit()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int k = 10;
	// pick the colorattribute k you want
	SetConsoleTextAttribute(console, k);
	cout << "\nconnect-4\n";
	cout << "This game was made by hussnain(huzzi) and majid\n";
	cout << "It is our lab project\n";
	cout << "Our Mentor : Sir Hannan Farooq\n";
	cout << "Course instructor Sir adeel\n";
	cout << "All rights are reserved\n\n";
}



//rules/instructions

void rules()     //r =rules
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int k = 9;
	// pick the colorattribute k you want

	SetConsoleTextAttribute(console, k);
	cout << "\nfirst select the choice\n";
	cout << "player 1 will have A and player 2 will have B\n";
	cout << "Both players will haave 32 turns each the one who matches first willbe the winner\n";
	cout << "you can only select the box which is empty '-'\n";
	cout << "you can connect horiontally,vertially and diagonally\n";
	cout << "If nothing connects and the boxes are filled then the it will be given as a draw\n\n";
}



int main()
{
	cout << setw(70) << "wlecome to connect-4\n\n";
	int num, gamechoice;
	do
	{
		cout << "Enter 1 to Play Game" << endl;
		cout << "Enter 2 for Credits" << endl;
		cout << "Enter 3 for Rules" << endl;
		cout << "Enter the choice\nif you want to exit press 0\n";
		cin >> num;
		if (num == 1)
		{
			gamechoice = game_type();
			play_game(gamechoice);
		}
		else if (num == 2)
		{
			credit();
		}
		else if (num == 3)
		{
			rules();
		}
	} while (num != 0);
}
