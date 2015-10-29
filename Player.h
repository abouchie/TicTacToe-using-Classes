/*
 * Adrienne Bouchie
 * Player.h
 * This file contains the class definition for the Player class 
 * 
 */

#include <iostream>
#include <string>
using namespace std;


class Player {

   public:	
	Player();
	Player( string, string );

	void inputPlayerInfo();
	void setFirstName( string );
	string getFirstName();
	void setLastName( string );
	string getLastName();
	void setPlayerToken( char );	
	char getToken();

   private:
	string firstName;
	string lastName;
	char token;


};


