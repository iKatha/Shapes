/*
 * Point.cpp
 *
 *  Created on: 26.05.2017
 *      Author: Kasia
 */

#include "Point.h"

Point::Point(double x, double y): x(x),y(y) {
}

void Point::setX(const double & x){
	this->x=x;
}

void Point::setY(const double & y){
	this->y=y;
}


