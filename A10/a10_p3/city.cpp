/*
CH-230-A
a10 p3.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include "city.hpp"

// Default constructor
CustomCity::CustomCity() : population(0), cityArea(0.0) {}

// Parameterized constructor
CustomCity::CustomCity(std::string n, int p, std::string l, double a)
    : cityName(std::move(n)), population(p), leader(std::move(l)), cityArea(a) {}

// Getter methods
std::string CustomCity::getCityName() const {
    return cityName;
}

int CustomCity::getPopulation() const {
    return population;
}

std::string CustomCity::getLeader() const {
    return leader;
}

double CustomCity::getCityArea() const {
    return cityArea;
}

// Setter methods
void CustomCity::setCityName(std::string n) {
    cityName = std::move(n);
}

void CustomCity::setPopulation(int p) {
    population = p;
}

void CustomCity::setLeader(std::string l) {
    leader = std::move(l);
}

void CustomCity::setCityArea(double a) {
    cityArea = a;
}
