//============================================================================
// Name        : Laboratorium1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Circle.h"
#include "ComplexShape.h"
#include "Point.h"

void draw(Point & start,Point & end,Shape & shape, int  resolutionX, int resolutionY ){
	double rX= (end.getX()-start.getX()) / resolutionX;
	double rY= (end.getY()-start.getY()) / resolutionY;

	for(double d=start.getY();d<end.getY();d+=rY){
		for(double e=start.getX();e<end.getX();e+=rX){
			Point p(e,d);
			if(shape.isIn(p)){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		cout<<endl;
	}
}

int main() {
	Point p(20,40);
	Circle c(4);
	c.setPosition(p);
	Rectangle r(20,6);
	r.setPosition(p);
	operacja o =roznicaSymetryczna;
	ComplexShape cs(c,r,o);
	operacja o2 =suma;
	ComplexShape cs2(cs,r,o2);
	cs2.setPosition(Point(30,15));
	Point start(0,0);
	Point end(100,100);
	draw(start,end,cs,100,100);
	draw(start,end,cs2,100,100);
}
