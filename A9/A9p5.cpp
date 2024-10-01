/*
CH-230-A
a9 p5.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <ctime>
 
using namespace std;
 
int main() {
 
    string playername; // The name of the player
    int trycount = 0, playernum, randomnum;
 
    // Number of tries, number entered by player, generated number
    srand(time(0)); // Generates a random seed
    randomnum = rand() % 100 + 1;
 
    // randomnum will have a value between 1 and 100
    cout << "What is your name player?" << endl;
    getline(cin, playername);
 
    // Player enters name
    cout << "The computer has generated a number between 1 and 100." << endl;
    cout << "Let's see if you can guess it. Enter a number:" << endl;
    while(1) {
        cin >> playernum;
 
        // Player makes his guess
        trycount++;
 
        // Number of tries is incremented
        if(playernum>randomnum) {
            cout << "Your number is larger." << endl;
        }
 
        // Hint for player
        if(playernum<randomnum) {
            cout << "Your number is smaller." << endl;
        }
 
        // Hint for player
        if(playernum==randomnum) {
            cout << "Congrats " << playername << ". You guessed it!" << endl;
            cout << "Number of tries: " << trycount << endl;
            break;
        }
 
        // Player is congratulated and loop breaks
    }
 
    return 0;
 
}