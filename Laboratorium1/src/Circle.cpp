/*
 * Circle.cpp
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#include "Circle.h"
#include <cmath>

Circle::Circle(const double  & r) {
	this->r=r;

}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

bool Circle::isIn(const Point & p)const{
	double d = sqrt( pow(p.getX()-position.getX(),2) + pow(p.getY()-position.getY(),2));
	if(d<=r)
		return true;
	else
		return false;
}

