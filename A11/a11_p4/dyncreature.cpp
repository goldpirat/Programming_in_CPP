/*
CH-230-A
a11 p4.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include "Creature.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

	string word;

	while(1){
		cout << "\nEnter a creature you want to create or quit to exit:\n";
		cout << "(Wizard / Magicarp / Dwarf) || (quit)\n";
		cin>>word;
		if(word=="Wizard"){
	    	cout << "\nCreating a Wizard...\n";
	    	Wizard *w;
	    	w = new Wizard;
	    	w -> run();
	    	w -> levatate();
	    	delete w;
		}
	    else if(word=="Magicarp"){
		    cout << "\nCreating a Magicarp...\n";
		    Magicarp *d;
		    d = new Magicarp;
		    d -> run();
		    d -> swim();
		    delete d;
		}
	    else if(word=="Dwarf"){
			cout << "\nCreating an Dwarf...\n";
		    Dwarf *e;
		    e = new Dwarf;
		    e -> run();
		    e -> mine();
		    delete e;
		}
		else if(word=="quit"){
			cout<<"\n Auf Wiedersehen:)\n";
			break;
		}
		else
            cout << "\nInvalid input!\n";
	}

    return 0;
}