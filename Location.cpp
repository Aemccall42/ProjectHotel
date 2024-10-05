#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include <random>
using namespace std;

//destructor for room pointer list to avoid mem leak
Location::~Location() 
{
    for (int i = 0; i < roomCount; ++i)
        delete rooms[i];
}
//main constructor
Location::Location() : locationName("Unknown"), roomCount(0) {}

//alt constructor for reading in from file?
Location::Location(const std::string& name) : locationName(name), roomCount(0) {}

//adds room (use for reading in from file?)
void Location::addRoom(Rooms* room) 
{
    if (roomCount < 100) 
    {
        rooms[roomCount] = room;
        ++roomCount;
    } 
    else 
    {
        cout << "Location has reached the maximum number of rooms." << endl;
    }
}

//displays room list
void Location::displayRooms() const 
{
    cout << "Rooms for " << locationName << ":" << endl;
    for (int i = 0; i < roomCount; ++i) 
    {
        rooms[i]->displayDetails();
    }
}

//displays location mame
void Location::displayLocation() const 
{
    cout << "Location: " << locationName << endl;
}

//getter for location name
string Location::getLocationName() const 
{
    return locationName;
}
//*OBSOLETE CODE, COVERED IN LOCATION.H*/
// int main()
// {
//     //Location objects
//     Location Loc1("Nashville", 50);
//     Location Loc2("Cookeville", 50);
//     Location Loc3("Franklin", 50);
//     Location Loc4("Crossville", 50);
//     Location Loc5("Murfreesboro", 50);
//     Location Loc6("Memphis", 50);
    
// void displayLocations()
//     {
//         cout<<"1. "<< Loc1.locations <<endl;
//         cout<<"2. "<< Loc2.locations <<endl;
//         cout<<"3. "<< Loc3.locations <<endl;
//         cout<<"4. "<< Loc4.locations <<endl;
//         cout<<"5. "<< Loc5.locations <<endl;
//         cout<<"6. "<< Loc6.locations <<endl;

//     }


// }
  

#endif