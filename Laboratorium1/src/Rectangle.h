/*
 * Rectangle.h
 *
 *  Created on: 12.05.2017
 *      Author: Kasia
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

class Rectangle:public Shape {
private:
	double width;
	double height;
public:
	Rectangle(const double & width, const double & height);
	virtual ~Rectangle();
	bool isIn(const Point & p)const override;
};

#endif /* RECTANGLE_H_ */
