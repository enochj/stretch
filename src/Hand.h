/*
 * Hand.h
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#ifndef HAND_H_
#define HAND_H_

class Hand {
private:
	Card *handArray;
public:
	Hand();
	Hand(const Hand &H);
	~Hand();
	friend ostream& operator<< (ostream &output, const Hand &H);
};



#endif /* HAND_H_ */
