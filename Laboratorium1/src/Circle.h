/*
 * Circle.h
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle:public Shape{
private:
	double r;
public:
	Circle(const double  & r);
	Circle(const double  & r,const Point & p);
	virtual ~Circle();
	bool isIn(const Point & p)const override;
};

#endif /* CIRCLE_H_ */
