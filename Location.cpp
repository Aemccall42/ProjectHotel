#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
using namespace std;

/*
Stores location information. 


*/

class Location //location class
{
public:
int numLocations= 6;
string* locations; //Contains 6 location strings.
//locations: Nashville, Cookeville, Franklin, Crossville, Murfreesboro, Memphis

//constructor
Location(string x)
{
locations[numLocations]=x;
}

};

int main()
//not sure if the objects should go here or somewhere else. 
{

    Location Loc1("Nashville");
    Location Loc2("Cookeville");
    Location Loc3("Franklin");
    Location Loc4("Crossville");
    Location Loc5("Murfreesboro");
    Location Loc6("Memphis");
}


#endif