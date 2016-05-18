/*
 * Player.c
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#include <iostream>
using namespace std;

#include "Hand.h"
#include "Player.h"

Player::Player() {}
Player::Player(Hand hand) {}
Player::~Player(){}
ostream& operator<< (ostream &output, const Player &P) {
	cout << "Player output operator ";
	return output;
}



