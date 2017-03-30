/*
 * fastFoodRestaurant.h
 *
 *  Created on: Mar 29, 2017
 *      Author: Owen
 */

#ifndef FASTFOODRESTAURANT_H_
#define FASTFOODRESTAURANT_H_

#include <iostream>
#include <string>
using namespace std;

class fastFoodRestaurant {
protected:
	string name;
public:
	virtual void whatPeopleSee()=0;
};

#endif /* FASTFOODRESTAURANT_H_ */
