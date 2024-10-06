/*
CH-230-A
a12 p2.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

// Initialize the static member location for the TournamentMember class
string TournamentMember::location = "Bremen";

// Default constructor for TournamentMember
TournamentMember::TournamentMember(){
	cout << "Default constructor called!\n";
}

// Parametric constructor for TournamentMember
TournamentMember::TournamentMember(const char* fn, const char* ln, 
const char* bd, float h, int a){
	int i;
    for(i=0; i<36; i++){
        firstname[i] = fn[i];
    }
	for(i=0; i<36; i++){
        lastname[i] = ln[i];
    }
    for(i=0; i<11; i++){
        birthday[i] = bd[i];
    }
    height = h;
	age = a;
	cout << "Constructor with parameters called!\n";
}

// Copy constructor for TournamentMember
TournamentMember::TournamentMember(const TournamentMember& temp){
	int i;
    for(i=0; i<36; i++){
        firstname[i] = temp.firstname[i];
    }
	for(i=0; i<36; i++){
        lastname[i] = temp.lastname[i];
    }
    for(i=0; i<11; i++){
        birthday[i] = temp.birthday[i];
    }
	height = temp.height;
	age = temp.age;
	cout << "Copy constructor called!\n";
}

// Destructor for TournamentMember
TournamentMember::~TournamentMember(){
	cout << "Member data destructed!\n";
}

// Method to print information about a TournamentMember
void TournamentMember::printMember(){
    cout << "Name: " << firstname <<" "<< lastname << endl;
    cout << "Date of birth: " << birthday << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " m\n";
    cout << "Location: " << location << endl;
}

// Static method to change the location for all TournamentMember instances
void TournamentMember::changeLocation(string l){
	location = l;
}