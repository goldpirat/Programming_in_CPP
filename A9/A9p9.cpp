/*
CH-230-A
a9 p9.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <ctime>
 
using namespace std;
 
int main() {
    //Array with 17 elements
    string array[17] = {"computer","television", "keyboard",
    "laptop", "mouse", "banana", "orange", "quantum", "again",
    "monitor", "goal", "marathon", "charger", "area", "phone",
    "internet", "omega"};
    //Variable to hold the index of the chosen word
    int n; 
    int trycount; //Number of tries
    //String to hold the chosen word
    string chosen_word;
    //String that will hold the word guessed by the player
    string guess; 
    //Players choice to continue or end the game
    string choice; 
    while(1) {
        trycount=0;
        srand(time(NULL)); //Number Random generator
        n=rand()%17;
        /*A value from 1 to 17 is assigned to n
        (the position of the chosen word)*/
        chosen_word=array[n];
        for(int i=0; chosen_word[i]!='\0'; i++) {
            if((chosen_word[i] == 'a') || (chosen_word[i] == 'e') ||
            (chosen_word[i] == 'i') || (chosen_word[i] == 'o') ||
            (chosen_word[i] == 'u')) {
                chosen_word[i]='_';
            }
        } //Converts vowels into underscores by going through the characters.
        cout << chosen_word << endl;
        // Modified Word is printed
        getline(cin, guess);
        //Player's guess is read from keyboard
        trycount++;
        // Guess Again Loop.
        while(guess!=array[n]) {
            cout << "Nope.Try again!" << endl;
            getline(cin, guess);
            trycount++;
        }
        cout << "Well done!" << endl;
        cout << "Number of attempts: " << trycount <<endl;
        cout << "Do you wish to continue?" << endl;
        cout << "Type 'yes' if you do and 'quit' if you don't." << endl;
        getline(cin, choice);
        if(choice=="quit") {
            break;
        }
        else if(choice=="yes") {
            continue;
        }
    }
 
    return 0;
 
}