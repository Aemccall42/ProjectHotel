#include "HotelChain.h"         //Include the header file 
#include <iostream>
#include <fstream>             // for file input/output operations

using namespace std;

// Constructor for the HotelChain class
// Intitializes room count and location count to 0

HotelChain::HotelChain() : room_Count(0), location_Count(0){}

// destructor for the HotelChain class
//dynamically allocated memory cleans up
HotelChain::~HotelChain(){

    //Loop through the array of room pointers and delete each room object
    for (int i = 0; i < room_Count; ++i){
        delete rooms[i];    //clean up
    }

    // //Loop through the array of room pointers and delete each room object
    for (int i = 0; i < location_Count; ++i){
        delete locations[i];    //clean up
    }
}

//load room and location data from a file
//The filename is provided as a parameter

void HotelChain:: loadFromFile(const string& filename) {
    ifstream file(filename);    //open the file for reading
    if (!file) {
        // check if the file opened successfully
        cout << "\nError opening file: " << filename << endl;

        return;     // exits the function
    }
}

//Implement file reading logic here	
//you would typically read data from the file and initialize room and location objects
// Ex: read room details and create room objects then add them to the room array

// display all rooms (if needed	)
//This function is currently a placeholder and should be implemented as needed.

void HotelChain::displayRooms() const{
    cout << " Display all rooms: " << endl;
    for (int i = 0; i < room_count; ++1) {

        rooms[i]->displayDetails();         // call a method to display details of each room
    }
}











/*





*/
//needed functions(?): Contructor, Destructor, Display, 

/*class HotelChain
//Requirements: be able to read items from a file, be able to print the contents to the screen.
{
private:
//Variables: number of hotels, ...
string hotelName;    
public:
   
   


};*/