/*
 * Deck.cpp
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#include <iostream>
#include <random>
using namespace std;

#include "Card.h"
#include "Deck.h"

Deck::Deck() {
	seed = rand();
	int i;
	deckarray = new Card[52];
	for (i=0; i<52; i++) {
		Card newCard(i);
		deckarray[i] = newCard;
	}
}

void Deck::shuffle() {
	int i;
	for (i=51; i >= 0; i--) {
		int r;
		r=rand()%(i+1);
		Card swapvalue = deckarray[r];
		deckarray[r] = deckarray[i];
		deckarray[i] = swapvalue;
		cout << deckarray[i].getLookup() << " " << deckarray[i] << endl;
	}
}

Deck::~Deck(void) {
	delete [] deckarray;
}




