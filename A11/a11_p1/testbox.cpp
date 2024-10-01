/*
CH-230-A
a11 p1.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main(){
	int n, i;
	double h, w, d;
	cin>>n;

    // Dynamically create an array of 2 * n boxes
	Box *arr = new Box[2*n];

    // Input data for the first n boxes
	for(i=0; i<n; i++){
		cout<<"Enter data for Box "<<i+1<<":\n";
		cout<<"Height: ";
		cin>>h;
		cout<<"Width: ";
		cin>>w;
		cout<<"Depth: ";
		cin>>d;
		arr[i] = Box(h, w, d);
	}

	// Use the parameterized constructor to create the Box object
	for(i=n; i<2*n; i++){
		arr[i] = Box(arr[i-n]);
	}
	
    // Loop across all boxes
	for(i=0; i<2*n; i++){
		cout<<"Volume of Box "<<i+1<<" = "<<arr[i].Volume()<<endl;
	}

    // Deallocate the dynamically allocated memory
    delete[] arr;

	return 0;
}