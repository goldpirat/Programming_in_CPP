/*
CH-230-A
a10 p2.cpp
Flori Kusari
fkusari@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

void Critter::setHealth(int newHealth) {
    health = newHealth;
}

void Critter::setIsCSMajor(bool newIsCSMajor) {
    isCSMajor = newIsCSMajor;
}

void Critter::print() {
    cout << "I am " << name << "." << endl;
    cout << "My hunger level is " << hunger << "." << endl;
    cout << "My height is " << height << "." << endl;
    cout << "My health is " << health << "." << endl;
    cout << "Am I Depressed? " << (isCSMajor ? "Yes" : "No") << "." << endl;
    // I thought this was more fun than just creating another number variable. 
}

int Critter::getHunger() {
    return hunger;
}

double Critter::getHeight() {
    return height;
}

int Critter::getHealth() {
    return health;
}

bool Critter::getIsCSMajor() {
    return isCSMajor;
}
