/*
CH-230-A
a9 p2.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    double x;
    string s;

    // Read an integer, a double, and a string from the keyboard
    cin >> n >> x >> s;

    // Loop n times
    while (n--) {
        // Print s and x separated by ':' with a newline
        cout << s << ":" << x << endl;
    }

    return 0; // Indicate successful program termination
}
