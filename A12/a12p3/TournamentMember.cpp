/*
CH-230-A
a12 p3.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

// Initializing the static member location for TournamentMember class
string TournamentMember::location = "Bremen";


// Default constructor for TournamentMember class
TournamentMember::TournamentMember(){
	cout << "Default constructor called!\n";
}

// Parametric constructor for TournamentMember class
TournamentMember::TournamentMember(const char* fn, const char* ln, 
const char* bd, float h, int a){
	int i;
	// Copying first name
    for(i=0; i<36; i++){
        firstname[i] = fn[i];
    }
	// Copying last name
	for(i=0; i<36; i++){
        lastname[i] = ln[i];
    }
	// Copying date of birth
    for(i=0; i<11; i++){
        birthday[i] = bd[i];
    }
	// Setting height and age
    height = h;
	age = a;
	cout << "Constructor with parameters called!\n";
}

// Copy constructor for TournamentMember class
TournamentMember::TournamentMember(const TournamentMember& temp){
	int i;
	// Copying first name
    for(i=0; i<36; i++){
        firstname[i] = temp.firstname[i];
    }
	// Copying last name
	for(i=0; i<36; i++){
        lastname[i] = temp.lastname[i];
    }
	// Copying date of birth
    for(i=0; i<11; i++){
        birthday[i] = temp.birthday[i];
    }
	// Setting height and age
	height = temp.height;
	age = temp.age;
	cout << "Copy constructor called!\n";
}

// Destructor for TournamentMember class
TournamentMember::~TournamentMember(){
	cout << "Member data destructed!\n";
}

// Method to print information of a tournament member
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

// Default constructor for Player class
Player::Player(){
	cout << "Player default constructor called!\n";	
}

// Parametric constructor for Player class
Player::Player(const char* fn, const char* ln, const char* bd, float h, 
int a, int n, string p, int g, string f):TournamentMember(fn, ln, bd, h, a){
	// Setting player-specific properties
	number = n;
	position = p;
	goals = g;
	foot = f;
	cout << "Player constructor with parameters called!\n";	
}

// Copy constructor for Player class
Player::Player(const Player& temp){
	// Copying player-specific properties
	number = temp.number;
	position = temp.position;
	goals = temp.goals;
	foot = temp.foot;
	cout << "Player copy constructor called!\n";
}

// Destructor for Player class
Player::~Player(){
	cout << "Player data destructed!\n";
}

// Method to print information of a player
void Player::printPlayer(){
	cout << "Player number: " << number << endl;
    cout << "Player position: " << position << endl;
    cout << "Number of goals: " << goals << endl;
    cout << "The player is " << foot << "-footed\n";
}

// Method to increment the number of goals for a player
void Player::incrementGoals(){
	goals++;
}