/*
 * Hand.cpp
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#include <iostream>
using namespace std;

#include "Card.h"
#include "Hand.h"

Hand::Hand() {
	int i;
	for (i=0; i<5; i++) {
		Card newCard();
		handArray[i] = newCard;
	}
}

Hand::Hand(Card* cards){
	int cardSize = sizeof(Card);
	int numCards = (sizeof(cards)/cardSize);
	for (int i=0; i< numCards; i++) {
		handArray[i] = cards[i];
	}
}

Hand::Hand(const Hand &H){
	int i=0;
	for (i=0; i < 5; i++) {
		handArray[i] = H.handArray[i];
	}
}

Hand::~Hand(){}

ostream& operator<< (ostream &output, const Hand &H){
	int i;
	cout << H.handArray[0];
	for (i=1; i<5; i++) {
		cout << " " << H.handArray[i];
	}
	return output;
}

