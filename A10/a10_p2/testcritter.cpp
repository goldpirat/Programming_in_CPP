/*
CH-230-A
a10 p2.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    Critter c;

    string name;
    int hunger;
    double height;
    int health;
    bool isCSMajor;

    cout << endl << "Please enter the following data: " << endl;
    cout << "Name: ";
    getline(cin, name);
    c.setName(name);

    cout << "Hunger [1-10]: ";
    cin >> hunger;
    c.setHunger(hunger);

    cout << "Height: ";
    cin >> height;
    c.setHeight(height);

    cout << "Health Level [1-10]: ";
    cin >> health;
    c.setHealth(health);

    cout << "Is the critter a CS Major? (1 for Yes, 0 for No): ";
    cin >> isCSMajor;
    c.setIsCSMajor(isCSMajor);

    cout << "Your creation is:" << endl;
    c.print();

    return 0;
}
