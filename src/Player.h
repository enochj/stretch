/*
 * Player.h
 *
 *  Created on: May 18, 2016
 *      Author: enochj
 */

#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
private:
	Hand hand();
public:
	Player();
	Player(Hand hand);
	Player(const Player &player);
	~Player();
	friend ostream& operator<< (ostream &output, const Player &P);
};



#endif /* PLAYER_H_ */
