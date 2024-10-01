/*
CH-230-A
a9 p3.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
using namespace std;
 
 // Function to calculate the absolute value of a floating-point number
float abs_(float a){
    if(a<0){
        // If a is negative, make it positive
        a*=-1;
    }
 
    return a;
 
}
 
int main(){
 
    float x;
    // Input a floating-point number
    cin>>x; 
    cout<<abs_(x)<<endl; // The absolute value of x is displayed.
 
    return 0;
 
}