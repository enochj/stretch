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
	handArray = new Card[5];
	//int i;
	//for (i=0; i<5; i++) {
	//	Card newcard;
	//	handArray[i] = newcard;
	//}
}

Hand::Hand(const Hand &H){
	int i=0;
	handArray = new Card[5];
	for (i=0; i < 5; i++) {
		handArray[i] = H.handArray[i];
	}
}

Hand::~Hand(){
	delete [] handArray;
}

ostream& operator<< (ostream &output, const Hand &H){
	int i;
	cout << H.handArray[0];
	for (i=1; i<5; i++) {
		cout << " " << H.handArray[i];
	}
	return output;
}

