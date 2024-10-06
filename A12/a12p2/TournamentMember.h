/*
CH-230-A
a12 p2.h
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

class TournamentMember{
	private:
	// Data members for general tournament member information
		char firstname[36];
		char lastname[36];
		char birthday[11];
		float height;
		int age;
		static std::string location;
		
	public:
		// Constructors and destructor
		TournamentMember();
		TournamentMember(const char*, const char*, const char*, float, int);
		TournamentMember(const TournamentMember&);
		~TournamentMember();
		
		// Setters:
		void setFirstName(const char* fn){
		    int i;
		    for(i=0; i<36; i++){
		        firstname[i] = fn[i];
		    }
		}
		
		void setLastName(const char* ln){
		    int i;
		    for(i=0; i<36; i++){
		        lastname[i] = ln[i];
		    }
		}
		
		void setBirthday(const char* bd){
		    int i;
		    for(i=0; i<11; i++){
		        birthday[i] = bd[i];
		    }
		}
		
		void setHeight(float h){
		    height = h;
		}
		
		void setAge(int a){
		    age = a;
		}
		
		std::string getFirstName(){
		    return firstname;
		}
		
		std::string getLastName(){
		    return lastname;
		}
		
		std::string getBirthday(){
		    return birthday;
		}
		
		float getHeight(){
		    return height;
		}
		
		int getAge(){
		    return age;
		}
		
		void printMember();
		
		static void changeLocation(std::string);
		
};