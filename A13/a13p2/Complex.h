/*
CH-230-A
a13 p2.h
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex{
	private:
    // Real part of the complex number
		int real;
    // Imaginary part of the complex number
		int imag;
	public:
        // Default constructor
		Complex();
        // Parametrized constructor
		Complex(int, int);
        // Copy constructor
		Complex(const Complex&);
        // Destructor
		~Complex();
		
        // Setters
		void setReal(int);
		void setImag(int);
		
        // Getters
		int getReal();
		int getImag();
		
        // Calculates the magnitude of the complex number
		int magnitude();
        // Calculates the conjugate of the complex number
		Complex conjugate();
        // Overloaded input operator
		friend std::istream& operator>>(std::istream&, Complex&);
        // Overloaded output operator
		friend std::ostream& operator<<(std::ostream&, const Complex&);
        // Overloaded Arithmetic operators:
		Complex operator+(const Complex&);
		Complex operator-(const Complex&);
		Complex operator*(const Complex&);
		Complex operator=(const Complex&);
        // Overloaded greater than operator
		bool operator>(Complex);
        // Overloaded less than operator
		bool operator<(Complex);
};

#endif
