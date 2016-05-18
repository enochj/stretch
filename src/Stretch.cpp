//============================================================================
// Name        : Stretch.cpp
// Author      : Enoch Jennison
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"

#define HANDSIZE 5

class Menu {
private:
	int choice;
public:
	int printm () {
		cout << "!!Welcome to Card Game!!" << endl;
		cout << "Choose an option:" << endl;
		cout << "(1) Deal \n(2) Quit" << endl;
		cin >> choice;
		return choice;
	};
};

class Player {
	Hand hand;
private:
public:
	Player();
	~Player();
};

int main() {
	Menu menu1;
	menu1.printm();

	srand(time(0));
	Deck deck1;
	deck1.shuffle();

	return 0;
}
