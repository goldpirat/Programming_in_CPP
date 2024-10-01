/*
CH-230-A
a10 p7.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

/*
Comments were added by me trying to understand the code.
Please feel free to ignore them.
*/

#include <iostream>
#include <cstring>

using namespace std;

// Definition of the NaiveString class
class NaiveString {
	private:
		char *str; // Pointer to dynamically allocated C-string

	public:
		// Constructors and Destructor
		NaiveString(const char*); 
		NaiveString(const NaiveString&); 
		~NaiveString(); 

		// Member functions
		void update(char, char); 
		void print();
};

// Implementation of the constructor that initializes from a C-string
NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1]; 
	strcpy(str, t); 
	cout << "first constructor being called" << endl;
}

// Implementation of the copy constructor
NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1]; 
	strcpy(str, src.str);
	cout << "copy constructor being called" << endl;
}

// Implementation of the destructor
NaiveString::~NaiveString() {
	delete[] str; 
	cout << "NaiveString being destroyed" << endl;
}

// Implementation of the update method to replace occurrences of oldchar with newchar
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

// Implementation of the print method to display the string
void NaiveString::print() {
	cout << str << endl;
}

// Function that takes NaiveString by value, updates it, and prints
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

// Function that takes NaiveString by reference, updates it, and prints
void funcByRef(NaiveString &s) {
	cout << "funcbyref() being called" << endl;
	s.update('D', 'c');
	s.print();
}

// Main function to demonstrate NaiveString operations
int main(int argc, char** argv) {
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;

	// Call funcByVal with the instance, demonstrating the copy constructor
	funcByVal(a);
	a.print(); 

	NaiveString b("cDddDdC");
	b.print();

	NaiveString c(b);
	c.print();

	cout << "About to call funcbyref()" << endl;

	funcByRef(c);
	
	return 0;
}
