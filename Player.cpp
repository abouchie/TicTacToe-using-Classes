/*
 * Adrienne Bouchie
 * Player.cpp
 * This file contains the member functions for the Player class
 *
 */

#include "Player.h"

   Player::Player() {
	firstName = " ";
	lastName = " ";
   }
	
   Player::Player( string fname, string lname ) {
	setFirstName( fname );
	setLastName( lname );
   }

   void Player::inputPlayerInfo() {
		
	string fname;
	string lname; 
	static int personCounter = 1;

	cout << "Player " << personCounter << ":  Enter your first name: " << endl;
        cin >> fname;
        setFirstName( fname );
        cout << "Enter your last name: " << endl;
        cin >> lname;
        setLastName( lname );	
	personCounter++;	
   }	

   void Player::setFirstName( string fname ) {
	firstName = fname;
   }
	
   string Player::getFirstName() {
	return( firstName );
   }

   void Player::setLastName( string lname ) {
	lastName = lname;
   }
	
   string Player::getLastName() {
	return( lastName );
   }

   void Player::setPlayerToken( char marker ) {
	token = marker;
   }

   char Player::getToken() {
	return( token );
   }
