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
	const Shape * shape1;
	const Shape * shape2;
	const operacja o;
public:
	ComplexShape(const Shape & s1,const Shape & s2,const operacja & o);
	ComplexShape(const Shape & s1,const Shape & s2,const Point & p,const operacja & o);
	virtual ~ComplexShape(){}
	bool isIn(const Point & p)const override;
};

#endif /* COMPLEXSHAPE_H_ */
