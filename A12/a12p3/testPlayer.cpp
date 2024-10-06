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

int main(){

	Player p1("Flori\0", "Kusari\0", "2003-07-28", 1.89, 20, 
	10, "Center-Forward", 38, "right & left");
    Player p2("Isagi\0", "Yoichi\0", "2005-11-30", 1.78, 17, 
	11, "Striker", 35, "right");
    Player p3("David\0", "Beckham\0", "1983-12-12", 1.83, 24, 
	7, "Central Attacking Midfield", 27, "right");

    // Change the location.
    TournamentMember::changeLocation("Hamburg");

    p1.incrementGoals();
	
	cout << endl;
	
    cout << "First player data:\n";
    p1.printMember();
    p1.printPlayer();

	cout << endl;
    
	cout << "Second player data:\n";
    p2.printMember();
    p2.printPlayer();

	cout << endl;

	cout << "Third player data:\n";
    p3.printMember();
    p3.printPlayer();
    
	cout << endl;
    
    return 0;
}