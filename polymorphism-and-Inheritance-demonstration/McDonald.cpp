/*
 * McDonald.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: Owen
 */

#include "McDonald.h"

McDonald::McDonald(string resName) {
	// TODO Auto-generated constructor stub
	name = resName;
}

void McDonald::whatPeopleSee(){
	cout << "This is " << name << endl;
	cout << "People see the cashier and the cookies." << endl;
}

