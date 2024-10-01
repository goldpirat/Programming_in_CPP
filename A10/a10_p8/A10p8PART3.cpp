/*
CH-230-A
a10 p8.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
 
using namespace std;
int main() {
    float realpart, imagpart;
    cout << "First complex number." << endl;
    cout << "Enter real part:" << endl;
    cin >> realpart; cout << "Enter imaginary part:" << endl;
    cin >> imagpart; Complex
    com1(realpart, imagpart);
    com1.print();
    cout << "Second complex number." << endl;
    cout << "Enter real part:" << endl;
    cin >> realpart;
    cout << "Enter imaginary part:" << endl;
    cin >> imagpart;
    Complex com2(realpart, imagpart);
    com2.print();
    cout << endl << "Their sum:" << endl;
    Complex com3 = com1.add(com2);
    com3.print();
    cout << endl << "Their product:" << endl;
    com3 = com1.multiply(com2);
    com3.print();
    cout << endl << "Their subtraction:" << endl;
    com3 = com1.subtract(com2);
    com3.print();
    cout << endl << "Conjugate of the first complex number" << endl;
    com3 = com1.conjugate(com1);
    com3.print();
    return 0;
}