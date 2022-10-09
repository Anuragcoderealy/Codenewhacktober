#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int hp =100, mana=200, strength , Dextenity ,dgchance, nstrength , nhp, pdamage, fdamage , dngchance;
	char enter;
	string playername;
	srand(time(0));

	strength = rand() % 20 + 1;
	Dextenity = rand() % 20 + 1;
	dgchance = 25 + Dextenity / 2;
	pdamage = 20 + strength * 12;
	nstrength = 20 + rand() %21;
	nhp = rand() % 601 + 400;
	dngchance = 20;

	cout << "welcome in the shadow world" << endl;

	cout << "please Enter your name: ";
	cin >> playername;

	//task 2
	system("CLS");


	cout << "Player Information" << endl;
	cout << endl;

	cout << "Player Name: ";
	cout << playername << endl;


	cout << "HP: ";
	cout <<  hp<< endl;

	cout << "Mana: ";
	cout << mana<< endl;

	cout << "strength: ";
	cout << strength << endl;

	cout << "Dextenity: ";
	cout << Dextenity << endl;

	cout << "Damage: " << pdamage << endl;
	cout << "Dodge Chance: " << dgchance << endl;

	// ------------------------------------NPC-----------------------------
	cout << "NPC" << endl;
	cout << endl;


	cout << "Name; Gaint Slug " << endl;
	cout << "HP: " << nhp <<  endl;
	cout << "Strength: " << nstrength << endl;
	cout << "Damage: " << nstrength * 2 + 10 << endl;
	cout << "Dodge: "<< dngchance << endl;
	
	system("pause");
	system("CLS");
	//Task 3
	
	cout << "----------fight begins----------" << endl;
	int achance, dchance;
	achance = rand() % 100 + 1;
	fdamage = rand() % pdamage + 1;
	if (achance > 55)
	{
		cout << "You attacked Gaint slug" << endl;
		if (achance> dgchance)
		{
			cout << "Damage:" << pdamage << endl;
		}
		else
		{
			cout << "-Gaint slug dodged the attack-";
		}

	}
	else
	{
		cout << "Gaint slug attacked you" << endl;
		if (achance> dngchance)
		{
			cout << "Damage:" << pdamage << endl;
		}
		else
		{
			cout << "-You dodged the attack-";
		}

	}

	return 0;
}

