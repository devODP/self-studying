/*
 * theoryInPlay.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: Owen
 */
#include "Harveys.h"
#include "McDonald.h"
#include <typeinfo>

int main(){
	Harveys h("Harveys");
	McDonald m("McDonalds");

	h.whatPeopleSee();

	cout << endl;
	m.whatPeopleSee();

	cout << endl;

	return 0;
}

