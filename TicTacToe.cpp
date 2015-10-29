/*
 * Adrienne Bouchie
 * TicTacToe.cpp
 * This file contains the member functions for the TicTacToe class
 *
 */

#include "TicTacToe.h"

   TicTacToe::TicTacToe() : WINNER_X (9), WINNER_O (-9) {
	playerX = 3;
	playerO = -3;	
	
   }	

   int TicTacToe::getPlayerX() {
	return( playerX );
   }

   int TicTacToe::getPlayerO() {
	return( playerO );
   }
	
   int TicTacToe::getCurrentPlayer() {
	return( currentPlayer );
   }

   void TicTacToe::setPlayerInfo() {
	
	char marker = 'a';

	players[0].inputPlayerInfo();
	cout << "Would you like to be X or O?" << endl;
	cin >> marker;
	players[0].setPlayerToken( marker );
	players[1].inputPlayerInfo();

	if ( players[0].getToken() == 'X' || players[0].getToken() == 'x' ) 
                marker = 'O';
        else
                marker = 'X';
		
	players[1].setPlayerToken( marker );
	cout << players[1].getFirstName() << " your token is " << players[1].getToken() << endl;
		
   }


   void TicTacToe::displayBoard() {
	for ( int r = 0; r < ROW; r++ ) {
		cout << "---------" << endl;
		for ( int c = 0; c < COL; c++ ) {
			if ( gameBoard[r][c].getMark() == -2 ) {
                               	cout <<  "  |";
                       	}
                       	else if ( gameBoard[r][c].getMark() == playerO ) {
                               	cout <<  "O |";
                        }
                      	else if ( gameBoard[r][c].getMark() == playerX ) {
                               	cout <<  "X |";
                        }
                        if ( c == 2 ) {
                               	cout << endl;
                        }
                }
        }
        cout << "---------" << endl;
   }


   void TicTacToe::makeMove() {

        int rowVal = -1;
        int colVal = -1;
	int player = 0;
	bool winner = true;	
	int counter = 0;

	
	do {

		for ( int i= 0; i < 2; i++ ) {

			if ( players[i].getToken() == 'X' || players[0].getToken() == 'x' ) { 
                		player = playerX;
       			}
        
			else {
       	        		player = playerO;
        		}
        	

			cout << players[i].getFirstName() << " make your move!" << endl;
               		cout << "What row?" << endl;
               		cin >> rowVal;

               		if ( rowVal-1 >= 0 && rowVal-1 < ROW ) {
                       		cout << "What column?" << endl;
                       		cin >> colVal;

                       		if ( colVal-1 >= 0 && colVal-1 < COL ) {
  
                             		if ( gameBoard[rowVal-1][colVal-1].getMark() == -2 ) {
                                       		gameBoard[rowVal-1][colVal-1].setMark( player );
                               			counter++;
						displayBoard();
						winner = checkForWinner(); 
						
						if ( winner == true ) {
							cout << "Congrats! " << players[i].getFirstName() << " has won!" << endl; 
							break;
						}
											
					}
                               		
					else {
                                       		cout << "Try again!" << endl;
                               		}
                       		}
               		}
		}
       	
	}  while ( !winner && counter < ROW*COL );

	
   }


   bool TicTacToe::checkForWinner() {

        int sum = 0;
        bool win = false;

        for ( int r = 0; r < ROW; r++ ) {
                sum = 0;

                for ( int c = 0; c < COL; c++ ) {
                        sum += gameBoard[r][c].getMark();
                }
                if ( sum == WINNER_X ) {
                        win = true;
                }
                else if ( sum == WINNER_O ) {
                        win = true;
                }

        }

        for ( int r = 0; r < ROW; r++ ) {
                sum = 0;

                for ( int c = 0; c < COL; c++ ) {
                        sum += gameBoard[c][r].getMark();
                }
                if ( sum == WINNER_X  ) {
                        win = true;
                }
                else if ( sum == WINNER_O ) {
                        win = true;
                }
        }


	sum = 0;
        for ( int r = 0; r < ROW; r++ ) {
                for ( int c = 0; c < COL; c++ ) {
                        if ( r == c ) {
                                sum += gameBoard[r][c].getMark();
                        }
                }

                if ( sum == WINNER_X  ) {
                        win = true;
		}
                else if ( sum == WINNER_O ) {
                        win = true;
                }
        }

        sum = 0;
        for ( int r = 0; r < ROW; r++ ) {
                for ( int c = 0; c < COL; c++ ) {
                        if ( r + c == 2 ) {
                       		sum += gameBoard[r][c].getMark();
                        }
                }

                if ( sum == WINNER_X  ) {
                        win = true;
		}
                else if ( sum == WINNER_O ) {
                        win = true; 
                }
        }

        return ( win );
	
   }


   const int TicTacToe::getROW() {
	return( ROW );
   }
   
   const int TicTacToe::getCOL() {	
	return( COL );
   }

