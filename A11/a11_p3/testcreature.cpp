/*
CH-230-A
a11 p3.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main() { 
    
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.levatate();
    
    cout << "\nCreating a Magicarp.\n";
    Magicarp d;
    d.run();
    d.swim();
 
    cout << "\nCreating an Dwarf.\n";
    Dwarf e;
    e.run();
    e.mine();
    
    return 0;
}