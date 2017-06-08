/*
 * Circle.cpp
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#include "Circle.h"
#include <cmath>

Circle::Circle(const double  & r):r(r) {
}

Circle::Circle(const double  & r,const Point & p):Shape(p), r(r) {
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

bool Circle::isIn(const Point & p)const{
	Point t=p-position;
	double d = sqrt( pow(t.getX(),2) + pow(t.getY(),2));
	if(d<=r)
		return true;
	else
		return false;
}

