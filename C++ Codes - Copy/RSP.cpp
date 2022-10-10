#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
//template for c++



int main() {
	srand(time(NULL));
	int randomNumber = rand() % 3 + 1;
	string answer;
	int userAnswer;

	for (;;) {
		cin.clear();
		cout << "rock, paper, or scissors? ";
		getline(cin, answer);

		if (!answer.compare("scissors") || !answer.compare("Scissors"))
		{
			userAnswer = 1;
			break;
		}

		if (!answer.compare("rock") || !answer.compare("Rock"))
		{
			userAnswer = 2;
			break;
		}

		if (!answer.compare("paper") || !answer.compare("Paper")) 
		{
			userAnswer = 3;
			break;
		}

		else {
			cout << "Please enter a valid answer.\n";
		}

	} // infinite for loop to get user to enter valid answer

	if (randomNumber == 1) {
		if (userAnswer == 1) {
			cout << "It's a tie! Computer chose scissors! ";
		}

		else if (userAnswer == 2) {
			cout << "You WIN! The computer chose scissors!";
		}

		else if (userAnswer == 3) {
			cout << "You LOSE! The computer chose scissors!";
		}


	} // result if computer chooses scissors

	else if (randomNumber == 2) {

		if (userAnswer == 1) {
			cout << "You LOSE! The computer chose rock!";
		}

		else if (userAnswer == 2) {
			cout << "It's a tie! The computer also chose rock!";
		}

		else if (userAnswer == 3) {
			cout << "You WIN! The computer chose rock!";
		}

	} // result if computer chooses rock

	else if (randomNumber == 3) {

		if (userAnswer == 1) {
			cout << "You WIN! The computer chose paper!";
		}

		else if (userAnswer == 2) {
			cout << "You LOSE! The computer chose paper!";
		}

		else if (userAnswer == 3) {
			cout << "It's a TIE! The computer chose paper!";
		}
	} // result if computer chooses paper

}
