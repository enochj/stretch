/*
 * Card.cpp
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */
#include <iostream>
using namespace std;

#include "Card.h"

Card::Card() {
	cout << "Card Copy Constructor blank" << endl;
	lookup = -1;
	value = -1;
	suit = 'N';
}

Card::Card(int a): lookup(a) {
	value = lookup % 13;
	if (lookup < 13) suit = 'S';
	else if (lookup < 26) suit = 'H';
	else if (lookup < 39) suit = 'D';
	else if (lookup < 52) suit = 'C';
}

Card::Card(const Card &obj) {
	cout << "Card Copy Constructor with values" << endl;
	lookup = obj.lookup;
	value = obj.value;
	suit = obj.suit;
}

ostream& operator<<(ostream &output, const Card &C)
{
		if (C.value == 0) {
			output << C.suit << 'A';
		}
		else if (C.value == 10) {
			output << C.suit << 'J';
		}
		else if (C.value == 11) {
			output << C.suit << 'Q';
		}
		else if (C.value == 12) {
			output << C.suit << 'K';
		}
		else {
			output << C.suit << (C.value + 1);
		}
		return output;
	}

int Card::getValue() {return this->value;};
int Card::getSuit() {return this->suit;};
int Card::getLookup() {return this->lookup;};



