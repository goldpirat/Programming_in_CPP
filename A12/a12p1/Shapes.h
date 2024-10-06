/*
CH-230-A
a12 p1.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H

#include <string>

class Shape {			// base class
	protected:   			
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
        // usual three constructors
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape
};
// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { 
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Hexagon : public RegularPolygon{
	private:
		double side;
		std::string color;
	public:
		Hexagon(const std::string&, double, double, double, const std::string&);
		Hexagon();
		Hexagon(const Hexagon&);
		~Hexagon();
		
		void setSide(double);
		void setColor(const std::string&);
		
		double getSide();
		const std::string& getColor();
		
		double perimeter();
		double area();
};
// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {  
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};
    
#endif