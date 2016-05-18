/*
 * Deck.h
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#ifndef DECK_H_
#define DECK_H_

class Deck {
private:
	Card deckarray[52];
	int seed;
public:
	void shuffle();
	void show();
	Deck();
	~Deck();
};

#endif /* DECK_H_ */
