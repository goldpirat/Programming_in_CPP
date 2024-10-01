/*
CH-230-A
a11 p4.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

// Implement the Creature constructor
Creature::Creature(): distance(10){
    cout<<"Empty constructor (Creature) called!\n";
}

// Implement the Creature destructor
Creature::~Creature(){
    cout << "\nCreature destructed!\n";
}

// Implement the run method
void Creature::run() const{
    cout << "Running " << distance << " meters!\n";
}  

// Implement the Wizard constructor
Wizard::Wizard() : distFactor(3){
    cout << "Empty Constructor (Wizard) called!\n";
}

// Implement the Wizard destructor
Wizard::~Wizard(){
    cout << "\nWizard destructed!";
}

// Implement the levatate method
void Wizard::levatate() const{
    cout << "Levatating " << (distFactor * distance) << " meters!\n";
}

// Implement the Magicarp constructor
Magicarp::Magicarp() : HeightFactor(15){
    cout << "Empty Constructor (Magicarp) called!\n";
}

// Implement the Magicarp destructor
Magicarp::~Magicarp(){
    cout << "\nMagicarp destructed!";
}

// Implement the swim method
void Magicarp::swim() const
{
    cout <<"Water-Springing "<< (HeightFactor * distance) <<" meters above ground!\n";
}

// Implement the Dwarf constructor
Dwarf::Dwarf() : DepthFactor(12){
    cout << "Empty Constructor (Dwarf) called!\n";
}

// Implement the Dwarf destructor
Dwarf::~Dwarf(){
    cout << "\nDwarf destructed!";
}

// Implement the dig method
void Dwarf::mine() const
{
    cout << "Mining " << (DepthFactor * distance) 
	<< " meters below ground level!\n";
}