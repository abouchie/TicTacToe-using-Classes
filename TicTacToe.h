/*
 * Adrienne Bouchie
 * TicTacToe.h
 * This file contains the function definitions for the TicTacToe Class
 *
 */

#include "Cell.h"
#include "Player.h"

class TicTacToe {

   public:
        TicTacToe();
	
	int getPlayerX();
	int getPlayerO();
	int getCurrentPlayer();
	void setPlayerInfo();
	
	void displayBoard();
        void makeMove();
	bool checkForWinner();	
	
	static const int getROW();
	static const int getCOL();	
	

   private: 	
	static const int ROW = 3;
        static const int COL = 3;
	
	Cell gameBoard[ROW][COL];
	Player players[2];
        int currentPlayer;
	
	int playerX;
        int playerO;
	const int WINNER_X;
        const int WINNER_O;	
	
};
