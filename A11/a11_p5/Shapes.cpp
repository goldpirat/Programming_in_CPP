/*
CH-230-A
a11 p5.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include <string>
#include "Shapes.h"

using namespace std;

// Base class representing a generic shape
Shape::Shape(const string& n) : name(n) {
	name = n;
}

Shape::Shape(){
	name = "default_name";
}

Shape::Shape(const Shape& sh){
	name = sh.name;
}

void Shape::Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(string n){
	name = n;
}

string Shape::getName(){
	return name;
}

// Derived class representing a centered shape
CenteredShape::CenteredShape(const string& n, double nx, double ny):Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(){
	x = 0;
	y = 0;	
}

CenteredShape::CenteredShape(const CenteredShape& cs){
	x = cs.x;
	y = cs.y;
}

void CenteredShape::move(double nx, double ny){
}

void CenteredShape::getX(double nx){
	x = nx;
}

void CenteredShape::getY(double ny){
	y = ny;
}

double CenteredShape::setX(){
	return x;
}

double CenteredShape::setY(){
	return y;
}

// Derived class representing a regular polygon
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny) {
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(){
	EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& rp){
	EdgesNumber = rp.EdgesNumber;
}

void RegularPolygon::getEdgesNumber(int en){
	EdgesNumber = en;
}

int RegularPolygon::setEdgesNumber(){
	return EdgesNumber;
}

// Derived class representing a circle
Circle::Circle(const string& n, double nx, double ny, double r) : 
CenteredShape(n,nx,ny) {
	Radius = r;
}

Circle::Circle(){
	Radius = 0;
}

Circle::Circle(const Circle& c){
	Radius = c.Radius;
}

void Circle::getRadius(double r){
	Radius = r;
}

double Circle::setRadius(){
	return Radius;
}

double Circle::perimeter(){
	return 2*M_PI*Radius;
}

double Circle::area(){
	return M_PI*Radius*Radius;
}

// Derived class representing a rectangle
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, 
double nheight):RegularPolygon(n,nx,ny,nwidth){
	width = nwidth;
	height = nheight;
}

Rectangle::Rectangle(){
	width = 0;
	height = 0;
}

Rectangle::Rectangle(const Rectangle& r){
	width = r.width;
	height = r.height;
}

void Rectangle::getWidth(double w){
	width = w;
}

void Rectangle::getHeight(double h){
	height = h;
}

double Rectangle::setWidth(){
	return width;
}

double Rectangle::setHeight(){
	return height;
}

double Rectangle::perimeter(){
	return 2*(width+height);
}

double Rectangle::area(){
	return width*height;	
}

// Derived class representing a square 
Square::Square(const string& n, double nx, double ny, double nside):
Rectangle(n,nx,ny,nside,nside){
	side = nside;
}

Square::Square(){
	side = 0;
}

Square::Square(const Square& s){
	side = s.side;
}

void Square::setSide(double nside){
	side = nside;
}

double Square::getSide(){
	return side;
}

double Square::perimeter(){
	return 4*side;
}

double Square::area(){
	return side*side;
}