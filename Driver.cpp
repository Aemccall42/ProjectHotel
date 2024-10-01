/*This progran is about Hotel occupancy where user can find which locaton and hotel they want to stay 
and if it is available? */


#include <iostream>
#include <cstdlib>
#include <cstring>
#include "HotelChain.h"     // Include the header for hotelchain
#include "Rooms.h"  // include the header for rooms
using namespace std;
/* */

void displayMenue()
{
    cout << "\nWelcome to exUtopia Hotel!" << endl;
    cout << "Please choose and option: " << endl;
    cout << "1. View Locations" << endl ;
    cout << "2. View Available Rooms " << endl;
    cout << "3. Exit " << endl;
}





int main()
{
 //tbd
HotelChain hotelChain;  // create an instance of Hotelchain
hotelChain.loadFromFile("rooms.txt");   //load room data from the file

while (true) {
    displayMenue()  ;    //Display the menu
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nAvailable Location: "<< endl;
        hotelChain.displayLocations();  //display locations

        break;

    case 2: 
        cout << "\nAvailable Rooms: " << endl;
        hotelChain.displayAvailableRooms(); // display avaible rooms
        
        break;
    
    case 3:
    cout << " Thank you for choosing exUtopia. GoodBye!!!" << endl;
        break;

    default: 
    cout << "Invalid choice. Please try again." << endl;

    break;
    }

}
    return 0;   //End of the program








}

