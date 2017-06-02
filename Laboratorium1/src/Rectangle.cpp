/*
 * Rectangle.cpp
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#include "Rectangle.h"
#include <cmath>
#include <stdlib.h>

Rectangle::Rectangle(const double & width, const double & height) {
	this->width=width;
	this->height=height;
}

Rectangle::~Rectangle() {
}

bool Rectangle::isIn(const Point & p)const{
	Point t = p-position;
	return ((abs(t.getX()) < width/2) && (abs(t.getY()) < height/2));
}
