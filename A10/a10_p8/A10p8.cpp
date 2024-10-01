/*
CH-230-A
a10 p8.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
 
 
using namespace std;
 
 
Complex::Complex() {
    realpart = 0;
    imagpart = 0;
}
 
Complex::Complex(float re, float im) {
    realpart = re;
    imagpart = im;
}
 
Complex::Complex(const Complex& com) {
    realpart = com.realpart;
    imagpart = com.imagpart;
}
 
Complex::~Complex() { }
 
 
float Complex::getRealpart() {
    return realpart;
}
 
float Complex::getImagpart() {
    return imagpart;
}
 
void Complex::setRealpart(float re) {
    realpart = re;
}
 
void Complex::setImagpart(float im) {
    imagpart = im;
}
 
 
 
Complex Complex::add(Complex com) {
    Complex sum;
    sum.realpart = realpart + com.realpart;
    sum.imagpart = imagpart + com.imagpart;
    return sum;
}
 
Complex Complex::multiply(Complex com) {
    Complex prod;
    prod.realpart = ((realpart)*(com.realpart))-((imagpart)*(com.imagpart));
    prod.imagpart = ((realpart)*(com.imagpart))+((imagpart)*(com.realpart));
    return prod;
}
 
Complex Complex::conjugate(Complex com) {
    com.realpart = realpart;
    com.imagpart = -imagpart;
    return com;
}
 
Complex Complex::subtract(Complex com) {
    Complex sub;
    sub.realpart = com.realpart - realpart;
    sub.imagpart = com.imagpart - imagpart;
    return sub;
}
 
void Complex::print() {
    if(imagpart) {
        cout << noshowpos << realpart << showpos << imagpart << "i" << noshowpos<<endl;
    }
    else {
        cout << realpart << endl;
    }
}