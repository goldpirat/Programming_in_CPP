/*
CH-230-A
a11 p5.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

    // Create a circle and a regular polygon
	Circle c("first circle", 3, 4, 7);
	RegularPolygon r("TRIANGLE", 1, 1, 3);

    // Print the names of the shapes
	r.printName();
	c.printName();
	
    // Create more shapes
	Circle circ("second circle", 5, 3, 2);
	Rectangle rec("RECTANGLE", 2, 2, 5, 6);
	Square sq("square", 2, 2, 3);

    // Display information about the second circle
	cout << "\nData for: ";
	circ.printName();
	cout << "Perimeter = " << circ.perimeter() << endl;
	cout << "Area = " << circ.area() << endl;

    // Display information about the rectangle
	cout << "\nData for: ";
	rec.printName();
	cout << "Perimeter = " << rec.perimeter() << endl;
	cout << "Area = " << rec.area() << endl;

    // Display information about the square
	cout << "\nData for: ";
	sq.printName();
	cout << "Perimeter = " << sq.perimeter() << endl;
	cout << "Area = " << sq.area() << endl;

	return 0;
}