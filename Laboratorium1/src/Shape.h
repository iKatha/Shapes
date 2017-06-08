/*
 * Shape.h
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include "Point.h"

class Shape {
protected:
	Point  position;
public:
	Shape(): position(0, 0){};
	Shape(const Point & p): position(p){};
	virtual ~Shape(){};
	virtual bool isIn(const Point & p)const=0;
	void setPosition(const Point & p){position=p;};
};

#endif /* SHAPE_H_ */
