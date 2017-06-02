/*
 * ComplexShape.cpp
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#include "ComplexShape.h"

ComplexShape::ComplexShape(Shape & s1, Shape & s2,operacja & o){
	this->shape1=&s1;
	this->shape2=&s2;
	this->o=o;
}

bool ComplexShape::isIn(const Point & p)const{
	Point t = p-position;
	switch(o){
	case suma:
		if(shape1->isIn(t)|| shape2->isIn(t) )
			return true;
		break;
	case iloczyn:
		if(shape1->isIn(t)&& shape2->isIn(t) )
			return true;
		break;
	case roznica:
		if(shape1->isIn(t)&& !shape2->isIn(t) )
			return true;
		break;
	case roznicaSymetryczna:
		if((shape1->isIn(t) || shape2->isIn(t)) && !(shape1->isIn(t) && shape2->isIn(t)))
			return true;
		break;
	}
	return false;
}


