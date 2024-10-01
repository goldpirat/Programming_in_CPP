/*
CH-230-A
a10 p4.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	Critter one = Critter();
	Critter two = Critter("Flori");
	Critter three = Critter("Flori@", 2, 30, 4);
	Critter four = Critter("Flori#", 2, 20);
	
	one.print();
	two.print();
	three.print();
	four.print();
	
	return 0;
}