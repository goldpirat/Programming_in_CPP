/*
CH-230-A
a10 p5.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

// Method to convert hunger from percentage form (internally) to integer form
double Critter::convert_to_double(){
    return((double)hunger/10.0);
}

// Method to convert manipulated double value of hunger to int (externally)
void Critter::convert_to_int(){
    double h = convert_to_double();
	hunger = (int)(10.0*h);
}

// Setter method for hunger
void Critter::setHunger(int newhunger){
    hunger = newhunger;
    convert_to_double();
	convert_to_int();
}

// Getter method for hunger
int Critter::getHunger(){
    return hunger;
}

// Display critter information
void Critter::print(){
	cout << "\nI am " << name << ".\n";
	cout << "My hunger level is " << hunger << ".\n";
	cout << "My boredom level is " << boredom << ".\n";
	cout << "My thirst level is " << thirst << ".\n";
	cout << "My height is " << height << " cm.\n\n";
}

// Default constructor
Critter::Critter(){
    name = "default_critter";
    height = 5.0;
    boredom = 0;
    hunger = 0.0;
    convert_to_double();
	convert_to_int();
    thirst = double(hunger);
    cout << "Constructor (1) is called.";
}

// Constructor with only name as a parameter
Critter::Critter(string temp_name){
    name = "0";
    hunger = 0.0;
    boredom = 0;
    height = 5.0;
    convert_to_double();
	convert_to_int();
	thirst = double(hunger);
    cout << "Constructor (2) is called.";
}

// Constructor with three parameters and default height
Critter::Critter(string temp_n, int temp_hu, int temp_b, double temp_he){
    name = temp_n;
    hunger = temp_hu;
	convert_to_double();
	convert_to_int();
	boredom = temp_b;
    height = temp_he;
    thirst = (double)hunger;
    cout << "Constructor (3) is called.";
}

// Constructor with five parameters
Critter::Critter(string temp_n, int temp_hu, int temp_b, 
				 double temp_he, double th){
	name = temp_n;
    hunger = temp_hu;
	convert_to_double();
	convert_to_int();
	boredom = temp_b;
    height = temp_he;
    thirst = th;
    cout << "Constructor (4) is called.";
    cout << "\nI am " << name << ".\n";
	cout << "My hunger level is " << hunger << ".\n";
	cout << "My boredom level is " << boredom << ".\n";
	cout << "My thirst level is " << thirst << ".\n";
	cout << "My height is " << height << " cm.\n";
}
