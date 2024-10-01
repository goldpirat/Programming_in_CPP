/*
CH-230-A
a10 p6.h
Flori Kusari
fkusari@jacobs-university.de
*/

#include <string>

class Critter{
	
	private:
	
		std::string name;
		int hunger;
		int boredom;
		int height;
		double thirst;
	
	public:
	
		Critter();
		Critter(std::string);
		Critter(std::string, int, int, int = 10);
		Critter(std::string, int, int, int, double);
		
		void print();
		
};