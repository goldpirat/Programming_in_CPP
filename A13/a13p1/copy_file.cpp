/*
CH-230-A
a13 p1.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	// Declare file streams and variables
	ifstream input;
	ofstream output;
	string line;
	char src[50], dest[50];

	// Read the name of the input file from the standard input
	fgets(src, sizeof(src), stdin);
	src[strlen(src)-1]='\0';
	
	// Open the input file
	input.open(src);
	// Check if the input file was successfully opened
	if(!input){
		cout << "Error opening input file!\n";
		exit(1);
	}
	
	// Modify the source filename to remove the file extension
	src[strlen(src)-4]='\0';
	// Create the destination filename by appending "_copy.txt"
	strcpy(dest, src);
	strcat(dest, "_copy.txt");

	// Open the output file
	output.open(dest);
	// Check if the copied file was successfully created.
	if(!output){
		cout << "Error opening output file!\n";
		input.close();
		exit(2);
	}
	
	// Check if both input and output files were opened successfull
	if(input && output){
		while(!input.eof()){
			getline(input, line);
			output << line << "\n";
		}
        cout << "Output file created!\n";
	}
	else
		cout << "Output file could not be created!\n";
	
	// Close both input and output files
    input.close();
    output.close();
	
	return 0;
}