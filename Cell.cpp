/*
 * Adrienne Bouchie
 * Cell.cpp
 * This file contains the Cell class member functions
 */

#include "Cell.h"

	
   Cell::Cell() {	
	mark = -2;
   }

   void Cell::setMark( int iVal) {
	mark = iVal;
   }

   int Cell::getMark() {
	return( mark );
   }

