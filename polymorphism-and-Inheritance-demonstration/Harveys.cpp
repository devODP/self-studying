/*
 * Harveys.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: Owen
 */

#include "Harveys.h"

Harveys::Harveys(string resName) {
	// TODO Auto-generated constructor stub
	name = resName;
}

void Harveys::whatPeopleSee(){
	cout << "This is " << name << endl;
	cout << "People see the cashier, garnish and the grill." << endl;
}
