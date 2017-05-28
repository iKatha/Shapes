/*
 * ComplexShape.h
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#ifndef COMPLEXSHAPE_H_
#define COMPLEXSHAPE_H_
#include "Shape.h"
#include "Operacja.h"
class ComplexShape:public Shape {
private:
	Shape * shape1;
	Shape * shape2;
	operacja o;
public:
	ComplexShape(Shape & s1, Shape & s2,operacja & o);
	virtual ~ComplexShape(){}
	bool isIn(const Point & p)const;
};

#endif /* COMPLEXSHAPE_H_ */
