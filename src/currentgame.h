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
	string _gameWord;
	int _attemptsLeft;
	vector<char> _wrongChars;
	vector<char>::iterator _wrongitr;
	char promptUser();
public:
	CurrentGame(){}
	void printWrongGuesses();
	void reset(string newWord);
	int play();
};

#endif /* CURRENTGAME_H_ */
