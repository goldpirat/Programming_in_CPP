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

int main(){
    // Create a TournamentMember object "one"
    TournamentMember one("Lorik\0", "Cana\0", "1983-07-27", 1.86, 40);

    // Create a TournamentMember object "two"
	TournamentMember two = TournamentMember();

    // Set properties for object two.
	two.setFirstName("Flori\0");
    two.setLastName("Kusari\0");
    two.setBirthday("2003-07-28");
    two.setHeight(1.89);
    two.setAge(20);

    TournamentMember three(two);
    
    cout<<endl;
    
    cout << "First member:\n";
    one.printMember();
    
    cout<<endl;
    
    cout << "Second member:\n";
    two.printMember();

    cout<<endl;
    
    two.changeLocation("Berlin");
    
    cout << "Third member:\n";
    three.printMember();
    
    cout<<endl;

    return 0;
}