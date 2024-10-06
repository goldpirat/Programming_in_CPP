/*
CH-230-A
a12 p1.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cmath>
#include "Shapes.h"

using namespace std; 

// Implementation of the Shape class
Shape::Shape(const string& n) : name(n) {
    // Constructor with a parameter
	name = n;
}
Shape::Shape(){
    // Default constructor
	name = "default_name";
}
Shape::Shape(const Shape& sh){
    // Copy constructor
	name = sh.name;
}
void Shape::printName() const {
    // Prints the name of the shape
	cout << name << endl;
}

// Implementation of the CenteredShape class
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    // Constructor with parameters
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(){
    // Default constructor
	x = 0;
	y = 0;
}
CenteredShape::CenteredShape(const CenteredShape& cs){
    // Copy constructor
	x = cs.x;
	y = cs.y;
}
void CenteredShape::move(double nx, double ny){
    // Moves the shape to a new position
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
    // Constructor with parameters
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(){
    // Default Constructor
	EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const RegularPolygon& rp){
    //Copy Constructor
	EdgesNumber = rp.EdgesNumber;
}

Hexagon::Hexagon(const string& n, double nx, double ny, double ns, const 
string& nc):RegularPolygon(n,nx,ny,6)
{
    // Constructor with parameters
	side = ns;
	color = nc;
}
Hexagon::Hexagon(){
    // Default Constructor
	side = 0;
	color = "default_color";
}
Hexagon::Hexagon(const Hexagon& h){
    //Copy Constructor
	side = h.side;
	color = h.color;
	name = h.name;
	x = h.x;
	y = h.y;
}
Hexagon::~Hexagon(){
    // Destructor
    cout << "Hexagon destructed" << endl;
    // Not really necessary I did this for fun.
    // By which I mean the printout of the destructor not the destructor itself
}
	
void Hexagon::setSide(double ns){
    // Sets the side length of the hexagon
	side = ns;
}
void Hexagon::setColor(const string& nc){
	// Sets the color of the hexagon
	color = nc;
}

double Hexagon::getSide(){
    // Gets the side length of the hexagon
	return side;
}
const string& Hexagon::getColor(){
    // Gets the color of the hexagon
	return color;
}

double Hexagon::perimeter(){
    // Calculates the perimeter of the hexagon
	return 6*side;
}
double Hexagon::area(){
    // Calculates the area of the hexagon
	return ((3*sqrt(3)*side*side)/2);
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
    // Constructor with parameters
	Radius = r;
}
Circle::Circle(){
    // Default constructor
	Radius = 0;
}
Circle::Circle(const Circle& c){
    // Copy constructor
	Radius = c.Radius;
}