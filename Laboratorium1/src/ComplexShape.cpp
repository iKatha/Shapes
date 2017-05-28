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
	switch(o){
	case suma:
		if(shape1->isIn(p)|| shape2->isIn(p) )
			return true;
		break;
	case iloczyn:
		if(shape1->isIn(p)&& shape2->isIn(p) )
			return true;
		break;
	case roznica:
		if(shape1->isIn(p)&& !shape2->isIn(p) )
			return true;
		break;
	case roznicaSymetryczna:
		if((shape1->isIn(p) || shape2->isIn(p)) && !(shape1->isIn(p) && shape2->isIn(p)))
			return true;
		break;
	}
	return false;
}


