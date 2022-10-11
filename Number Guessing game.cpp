#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

	int num1, num2, guess, nguess = 1;
	int guess2, nguess2 = 1;
	string player1name, player2name;
	srand(time(0));

	num1 = rand() % 100 + 1;
	num2 = rand() % 100 + 1;
	// generates random number between 1-100
	// printf("random number:%d\n",num);

	// PLayers name

	cout << "Player 1 please enter your name: ";
	getline(cin, player1name);

	cout << "Player 2 please enter your name: ";
	getline(cin, player2name);


	cout << "Player 1 turn" << endl;

	cout << "Guess a Random number between 1-100" << endl;


	do   // loop starts
	{
		cin >> guess;

		if (guess > num1) // if  guess is greater than randnumber
		{
			cout << "Please Enter smaller number than " << guess << endl;
		}
		else if (guess < num1) // if guess is smaller than the randnumber
		{
			cout << "please Enter Higher Number than " << guess << endl;
		}

		else
		{
			cout << "game over" << endl;
			cout << endl;
		}

		nguess++;
		Cout << "you took" << nguess << "chances" << endl;
	} while (guess != num1);

	cout << "Player 2 turn" << endl;

	cout << "Guess a Random number between 1-100" << endl;


	do   // loop starts
	{
		cin >> guess2;

		if (guess2 > num2) // if  guess is greater than randnumber
		{
			cout << "Please Enter smaller number than " << guess2 << endl;
		}
		else if (guess2 < num2) // if guess is smaller than the randnumber
		{
			cout << "please Enter Higher Number than " << guess2 << endl;
		}

		else
		{
			cout << "game over" << endl;
			cout << endl;
		}
		
		nguess2++;
		Cout << "you took" << nguess2 << "chances" << endl;

	} while (guess2 != num2);
	
	if (nguess2 > nguess) {

		cout << player1name << " --------- won the game!---------" << endl;
	}
	else if (nguess > nguess2)
	{
		cout << player2name << " --------- won the game!---------" << endl;
	}

	else
	{
		cout << "--------- Game Draw ---------" << endl;
	}


	return 0;
}
