#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include <random>
using namespace std;

/*
Stores location information. 


*/

class Location //location class
{

public:
int loction_count= 6;
int room_Count;
string* locations; //Contains 6 location strings.


//constructor
Location(string x, int y)
{
locations[numLocations]=x; // *** this actually might need to be just a string and not an array since each object gets a string ***
room_Count=y;

}
//destructor
~Location()
{}

};

int main()
{
    //Location objects
    Location Loc1("Nashville", 50);
    Location Loc2("Cookeville", 50);
    Location Loc3("Franklin", 50);
    Location Loc4("Crossville", 50);
    Location Loc5("Murfreesboro", 50);
    Location Loc6("Memphis", 50);

    displayLocations()
    {
        cout<<"1. "<< Loc1.locations <<endl;
        cout<<"2. "<< Loc2.locations <<endl;
        cout<<"3. "<< Loc3.locations <<endl;
        cout<<"4. "<< Loc4.locations <<endl;
        cout<<"5. "<< Loc5.locations <<endl;
        cout<<"6. "<< Loc6.locations <<endl;

    }

}


#endif