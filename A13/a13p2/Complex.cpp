/*
CH-230-A
a13 p2.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(){
    // Initialize real and imaginary parts to zero
	real = imag = 0;
}
Complex::Complex(int r, int i){
    // Initialize real part with r
	real = r;
    // Initialize imaginary part with i
	imag = i;
}
Complex::Complex(const Complex& c){
    // Copy real part
	real = c.real;
    // Copy imaginary part
	imag = c.imag;
}
Complex::~Complex(){
}

void Complex::setReal(int r){
    // Set new value for real part
	real = r;
}
void Complex::setImag(int i){
    // Set new value for imaginary part
	imag = i;
}

int Complex::getReal(){
    // Return the real part
	return real;
}
int Complex::getImag(){
    // Return the imaginary part
	return imag;
}

Complex Complex::conjugate(){
    // Create a copy of the complex number
	Complex con = Complex(*this);
    // Change the sign of the imaginary part
	con.imag = this->imag*(-1);
	return con;
}

istream& operator>>(istream& input, Complex& c){
	cout<<"real part: ";
    // Input for the real part
	input>>c.real;
	cout<<"imaginary part: ";
    // Input for the imaginary part
	input>>c.imag;
	return input;
}

ostream& operator<<(ostream& output, const Complex& c){
	if(!c.imag)
    // If imaginary part is zero, only output real part
		output<<c.real;
	else{
		if(c.imag>0)
            // Output in the form a + bi if imaginary part is positive
			output<<c.real<<"+"<<c.imag<<"i";
		else
            // Output in the form a - bi if imaginary part is negative
			output<<c.real<<c.imag<<"i";
	}
	return output;
}

Complex Complex::operator+(const Complex& c){
	Complex sum;
	sum.real = this->real + c.real;
	sum.imag = this->imag + c.imag;
	return sum;
}

Complex Complex::operator-(const Complex& c){
	Complex dif;
	dif.real = this->real - c.real;
	dif.imag = this->imag - c.imag;
	return dif;	
}

Complex Complex::operator*(const Complex& c){
	Complex prod;
	prod.real = this->real*c.real - this->imag*c.imag;
	prod.imag = this->real*c.imag + this->imag*c.real;
	return prod;
}

Complex Complex::operator=(const Complex& c){
	this->real = c.real;
	this->imag = c.imag;
	return *this;
}

// Calculate and return the magnitude of the complex number
int Complex::magnitude(){
	return sqrt(pow(this->real, 2)+pow(this->imag, 2));
}

// Compare magnitudes and return true if greater
bool Complex::operator>(Complex c){
	return (this->magnitude() > c.magnitude() ? true : false);
}

// Compare magnitudes and return true if smaller
bool Complex::operator<(Complex c){
	return (this->magnitude() < c.magnitude() ? true : false);
}