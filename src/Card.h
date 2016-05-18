/*
 * Card.h
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#ifndef CARD_H_
#define CARD_H_

class Card {
private:
	int lookup;
	int value;
	char suit;
public:
	Card();
	Card(int a);
	Card(const Card &obj);
	friend ostream &operator<<(ostream &output, const Card &C);
	int getValue();
	int getSuit();
	int getLookup();
};



#endif /* CARD_H_ */
