/*
CH-230-A
a10 p2.h
Flori Kusari
fkusari@jacobs-university.de
*/
#include <string> 

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;
    // New Properties
    int health; 
    bool isCSMajor;   

public:
    // Old Setters
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    //New Setters
    void setHeight(double newheight); 
    void setHealth(int newHealth);
    void setIsCSMajor(bool newIsCSMajor);

    // Old Getter
    int getHunger();
    // New Getters
    double getHeight();  
    int getHealth();       
    bool getIsCSMajor();   

    // service method
    void print();
};