/*
CH-230-A
a10 p5.cpp
Flori Kusari
fkusari@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

int main()
{
    string name;

    // Create a critter with default values
    Critter critter_1;
    critter_1.setHunger(2);
    critter_1.print();
    
	// Create a critter with only a name parameter
    Critter critter_2(name);
    critter_2.setHunger(2);
    critter_2.print();
    
	// Create a critter with specific values for all parameters
    Critter critter_3_1("Golden_Warrior", 4, 76, 23);
    critter_3_1.setHunger(2);
    critter_3_1.print();
    
	// Test default value 10 with only three given parameters
    Critter critter_3_2("Thief", 7, 80);
    critter_3_2.setHunger(2);
    critter_3_2.print();
    
	// Test the constructor taking five parameters
	Critter critter_4("Gorlock_The_Destroyer", 5, 35, 23, 11.4); // only extra line
	
    return 0;
}