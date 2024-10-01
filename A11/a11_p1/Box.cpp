/*
CH-230-A
a11 p1.cpp
Flori Kusari
fkusari@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;

// Default constructor
Box::Box(){
	height = width = depth = 0;
}
// Parameterized constructor
Box::Box(double h, double w, double d){
	height = h;
	width = w;
	depth = d;	
}
// Copy constructor
Box::Box(const Box &b){
	height = b.height;
	width = b.width;
	depth = b.depth;	
}
// Destructor
Box::~Box(){
}

void Box::setHeight(double h){
	height = h;
}
void Box::setWidth(double w){
	width = w;
}
void Box::setDepth(double d){
	depth = d;
}

double Box::getHeight(){
	return height;
}
double Box::getWidth(){
	return width;
}
double Box::getDepth(){
	return depth;
}

// Method to calculate volume
double Box::Volume(){
	return height*width*depth;
}