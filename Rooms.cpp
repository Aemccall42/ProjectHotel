#include "Rooms.h"
#include <iostream>

using namespace std;

 // constructor FIX
Rooms::Rooms()
{
    occupied = false;
}
 //destructor
Rooms::~Rooms()
{

}

//getter for priv variable
bool Rooms::getInfo()
{
    return occupied;
}
/*
//setter for priv variable,, input MUST BE 0 OR 1
void Rooms::setInfo(bool newInfo)
{
    occupied = newInfo;
}

class rooms_occupation 
//Stores the room number and whether it is occupied or not
{
private:
bool roomOccupation; // = true=Occupied, false=Unoccupied

    
public:

};
*/