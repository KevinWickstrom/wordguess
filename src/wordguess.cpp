//============================================================================
// Name        : wordguess.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "currentgame.h"
#include "dictionary.h"

using namespace std;


int main(){
	CurrentGame cg;
	Dictionary d;
	int win=0;
	int loss=0;

	d.buildDictionary();

	char choice, letter;
	bool done;
	int wordidx;

	srand((unsigned) time(NULL));
	cout << "Would you like to play the WordGuess Game? Y/N" << endl;
	cin >> choice;
	while ((choice != 'n') && (choice != 'N')){
		wordidx = rand() % d.size();// get index subscript of next word to play
		cg.reset(d.getWord(wordidx));
		int result = cg.play();
		if (result == 1){
			cout << "You win!" << endl;
			win++;
		} else {
			cout << "You lose..." << endl;
			loss++;
		}
		cout<< "Wins: " + std::to_string(win) + " Losses: " + std::to_string(loss) << endl;
		cout << "Would you like to play the WordGuess Game? Y/N" << endl;
		cin >> choice;
	}

}




