/*
 * Point.h
 *
 *  Created on: 26.05.2017
 *      Author: Kasia
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	double x;
	double y;
public:
	Point(double x, double y);
	double getX()const{return x;};
	double getY()const{return y;};
	void setX(const double & x);
	void setY(const double & y);
};

#endif /* POINT_H_ */
