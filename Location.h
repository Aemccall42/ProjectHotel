#ifndef LOCATION_H
#define LOCATION_H

//including rooms so that each hotel has its own room list
#include "Rooms.h"
#include <string>
using namespace std;
class Location
{

private:
    string locationName;  // Name of the location (e.g., city)
    Rooms* rooms[100];         // Array of pointers to Room objects (max 100 rooms per location)
    int roomCount; 

public:

    //constructor and alt constr for setting name from file
    Location(); //constructor
    Location(const string& name);
    ~Location(); //destructor

    //prototypes list
    void displayLocations() const;
    void addRoom(Rooms* room);
    void displayRooms() const;
    string getLocationName() const;
};
#endif