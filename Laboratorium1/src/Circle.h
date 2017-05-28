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
	virtual ~Circle();
	bool isIn(const Point & p)const;
};

#endif /* CIRCLE_H_ */
