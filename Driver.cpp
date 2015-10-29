/*
 * Adrienne Bouchie
 * Driver.cpp
 *
 */

#include "TicTacToe.h"


main() {


	char playerAnswer;
	
	TicTacToe TTT;
	
	cout << "Would you like to play a game of Tic-Tac-Toe? (y/n)" << endl;
	cin >> playerAnswer;
	
	if ( playerAnswer == 'y' || playerAnswer == 'Y' ) {
	
		TTT.setPlayerInfo();				
		TTT.displayBoard(); 
		TTT.makeMove();

	}

	else
		cout << "Okay you're no fun! Bye!" << endl;
}
