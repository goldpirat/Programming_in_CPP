/*
CH-230-A
a11 p6.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

// Default constructor
Vector::Vector(){
	size = 0;
	ptr = NULL;
}
// Parametrized constructor
Vector::Vector(int n, double* arr){
	size = n;
	ptr = new double[size];
	for(int i = 0; i < size; i++)
		ptr[i] = arr[i];
}
// Copy constructor
Vector::Vector(const Vector& v){
	size = v.size;
	ptr = new double[v.size];
	for(int i = 0; i < size; i++)
		ptr[i]=v.ptr[i];
}
// Destructor
Vector::~Vector(){
	delete ptr;
}
// Setter for size
void Vector::setSize(int n){
	size = n;
	ptr = new double[size];
}
// Setter for memory
void Vector::setMemory(double* arr){
	ptr = new double[size];
	for(int i = 0; i < size; i++)
		ptr[i]=arr[i];
}
// Getter for size
int Vector::getSize(){
	return size;
}
// Getter for memory
double* Vector::getMemory(){
	return ptr;
}
// Print the vector
void Vector::print(){
	cout<<"( ";
	for(int i = 0; i < size; i++){
		cout<<ptr[i];
		if(i<(size-1))
			cout<<", ";
	}
	cout<<" )\n";
}
// Calculate the Euclidean norm of the vector
double Vector::norm() {
    double norm = 0;
    for (int i = 0; i < size; i++) {
        norm = norm + ptr[i] * ptr[i];
    }
    return sqrt(norm);
}

// Add two vectors
Vector Vector::add(const Vector v) const {
    Vector sum;
    sum.size = size;
    double temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = ptr[i] + v.ptr[i];
    }
    sum.setMemory(temp);
    return sum;
}

// Subtract two vectors
Vector Vector::sub(const Vector v) const {
    Vector dif;
    dif.size = size;
    double temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = ptr[i] - v.ptr[i];
    }
    dif.setMemory(temp);
    return dif;
}

// Multiply two vectors (dot product)
double Vector::mult(const Vector v) const {
    double prod = 0;
    for (int i = 0; i < size; i++) {
        prod = prod + (ptr[i] * v.ptr[i]);
    }
    return prod;
}