#ifndef HotelChain_H
#define HotelChain_H

#include "Rooms.h"
#include "Location.h"

class HotelChain
{
private:
    Rooms* rooms[100];//Array of pointers to room objects
    Location* locations[6];  // Array of pointers to location object

    int room_Count;     //number of rooms
    int location_Count ;    // number of locations

public:
    HotelChain();       //constructor
    ~HotelChain();      //destructor

    void loadFromFile(const string& filename);
    void displayLocations() const;
    void displayAvailableRooms() const;
    void add_Rooms(const Rooms& rooms);
    void addLocation(const Location& location);
};


#endif      //HotelChain_H