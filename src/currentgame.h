/*
 * currentgame.h
 *
 *  Created on: Sep 23, 2019
 *      Author: cstclair
 */

#ifndef CURRENTGAME_H_
#define CURRENTGAME_H_

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class CurrentGame {
private:
	string _playerWord;
	//state of player's word
	string _gameWord;
	int _attemptsLeft;
	vector<char> _wrongChars;
	char promptUser();
public:
	CurrentGame(){}
	void reset(string newWord);
	int play();
};

#endif /* CURRENTGAME_H_ */
