/*
CH-230-A
a10 p3.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
#include "city.hpp"

int main() {
    const int numCustomCities = 3;

    // Create an array of CustomCity objects
    CustomCity customCities[numCustomCities] = {
        {"Bremen", 569352, "Andreas Bovenschulte", 326.7},
        {"Paris", 2161000, "Anne Hidalgo", 105.4},
        {"London", 8982000, "Sadiq Khan", 1572}
    };

    // Print information for each custom city using a loop
    for (int i = 0; i < numCustomCities; ++i) {
        std::cout << "\nInformation about " << customCities[i].getCityName() << ":" << std::endl;
        std::cout << "Name: " << customCities[i].getCityName() << std::endl;
        std::cout << "Population: " << customCities[i].getPopulation() << std::endl;
        std::cout << "Leader: " << customCities[i].getLeader() << std::endl;
        std::cout << "Area: " << customCities[i].getCityArea() << " km^2" << std::endl;
    }

    return 0;
}
