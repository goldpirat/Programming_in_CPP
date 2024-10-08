/*
CH-230-A
a12 p4.h
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);      // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                 // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1.

	// prints it to screen
    friend ostream& operator<<(ostream&, const Fraction&);
    friend istream& operator>>(istream&, Fraction&);
    Fraction operator*(Fraction&);
    Fraction operator/(Fraction&);
    // overloaded operators instead of print() service method
};

#endif /* FRACTION_H_ */