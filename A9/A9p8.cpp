/*
CH-230-A
a9 p8.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
 
using namespace std;
 
void subtract_max(int array[], int size) {
    int max=array[0];
    for(int i=0; i<size; i++) {
        if(max<array[i]) {
            max=array[i];
        }
    }
    for(int i=0; i<size; i++) {
        array[i]=array[i]-max;
    }
} /*This function finds the largest value in an array
of integers with dimension size and modifies it by subtracting
this value from each element */
 
void deallocate(int array[]) {
    delete [] array;
} //Frees memory
 
int main() {
 
    int n; // Array dimension
    cout << "Enter the # of values you want to put in the array:" << endl;
    cin >> n; //n is read from keyboard
    int* ptr = new int[n]; // Memory for integer array of size n is allocated
    cout << "Enter the values:" << endl;
    for(int i=0; i<n; i++) {
        cin >> ptr[i];
    } //Values are read from keyboard into the array
    cout << "Your array:" << endl;
    for(int i=0; i<n; i++) {
        cout << ptr[i] << " ";
    } //The array that was entered is printed as is
    cout << endl;
    subtract_max(ptr, n);
    //Function is executed
    cout << "Modified array:" << endl;
    for(int i=0; i<n; i++) {
        cout << ptr[i] << " ";
    } //Modified array is printed
    cout << endl;
    deallocate(ptr);
 
    return 0;
 
}