/*
CH-230-A
a10 p6.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;

int main(){

	Critter one = Critter();
	Critter two = Critter("Flori");
	Critter three = Critter("Flori@", 60, 30, 4);
	Critter four = Critter("Flori#", 80, 20);
	
	one.print();
	two.print();
	three.print();
	four.print();
	(Critter("Flori$", 30, 70, 8, 20.5)).print();
	
	return 0;
}