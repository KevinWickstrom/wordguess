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
	int wins = 0;
	int loss = 0;
	// set seed of random number generator
	srand((unsigned) time(NULL));
	cout << "Would you like to play the WordGuess Game? Y/N" << endl;
	cin >> choice;
	while ((choice != 'n') && (choice != 'N')){
		wordidx = rand() % d.size();// get index subscript of next word to play
		cg.reset(d.getWord(wordidx));

		if(cg.play())
			wins++;
		else 
			loss++;
		cout << "You have won: " << wins << " You have lost: " << loss << endl;

		cout << "Would you like to play the WordGuess Game? Y/N" << endl;
		cin >> choice;
	}

}




