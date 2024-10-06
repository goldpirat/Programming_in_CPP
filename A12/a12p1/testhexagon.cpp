/*
CH-230-A
a12 p1.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
    
    // Creating Hexagon a with default values
    Hexagon a;
    cout << "Hexagon a constructed" << endl;
    a.setColor("blue");
    a.setSide(9);
    cout << "Color of Hexagon a: " << a.getColor() << endl;
    cout << "Side of Hexagon a: " << a.getSide() << endl;
    cout << "Perimeter of Hexagon a: " << a.perimeter() << " units" << endl;
    cout << "Area of Hexagon a: " << a.area() << " square units" << endl;
    cout << endl;

    // Creating Hexagon b with specified values
    Hexagon b;
    cout << "Hexagon b constructed" << endl;
    b.setColor("green");
    b.setSide(15);
    cout << "Color of Hexagon b: " << b.getColor() << endl;
    cout << "Side of Hexagon b: " << b.getSide() << endl;
    cout << "Perimeter of Hexagon b: " << b.perimeter() << " units" << endl;
    cout << "Area of Hexagon b: " << b.area() << " square units" << endl;
    cout << endl;

    // Creating Hexagon c as a copy of b using the copy constructor
    Hexagon c(b);
    cout << "Hexagon c constructed as a copy of b" << endl;
    cout << "Color of Hexagon c: " << c.getColor() << endl;
    cout << "Side of Hexagon c: " << c.getSide() << endl;
    cout << "Perimeter of Hexagon c: " << c.perimeter() << " units" << endl;
    cout << "Area of Hexagon c: " << c.area() << " square units" << endl;
    cout << endl;

    return 0;
}