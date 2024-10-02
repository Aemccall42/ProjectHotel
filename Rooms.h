#ifndef ROOMS_H
#define ROOMS_H

//room class for use inside of location array
class Rooms
{
private:
bool occupied;

public:
 // constructor, finish
Rooms();

 //destructor, finish
~Rooms();

//getter for priv variable
bool getInfo()
{
    return occupied;
};

//setter for priv variable,, input MUST BE 0 OR 1
void setInfo(bool newInfo)
{
    occupied = newInfo;
};
};

#endif