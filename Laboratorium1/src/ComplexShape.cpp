/*
 * ComplexShape.cpp
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#include "ComplexShape.h"

ComplexShape::ComplexShape(const Shape & s1,const Shape & s2,const operacja & o):shape1(&s1),shape2(&s2),o(o){
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


