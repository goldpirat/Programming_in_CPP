/*
CH-230-A
a10 p3.h
Flori Kusari
fkusari@jacobs-university.de
*/
#ifndef CUSTOM_CITY_HPP
#define CUSTOM_CITY_HPP

#include <string>

class CustomCity {
private:
    std::string cityName;
    int population;
    std::string leader;
    double cityArea;

public:
    // Constructors
    CustomCity();
    CustomCity(std::string n, int p, std::string l, double a);

    // Getter methods
    std::string getCityName() const;
    int getPopulation() const;
    std::string getLeader() const;
    double getCityArea() const;

    // Setter methods
    void setCityName(std::string n);
    void setPopulation(int p);
    void setLeader(std::string l);
    void setCityArea(double a);
};

#endif // CUSTOM_CITY_HPP
