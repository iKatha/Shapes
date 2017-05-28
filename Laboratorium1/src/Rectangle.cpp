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
	return ((abs(p.getX()-position.getX()) < width/2) && (abs(p.getY()-position.getY()) < height/2));
}
