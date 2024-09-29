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





/*string hotelName = "exUtopia"; //example name, can choose later
string location;
int roomNumber; */

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


/*cout<<"Welcome to "<< hotelName <<"!"<<endl;
cout<<"Which location would you like to stay in?"<<endl;
//lists locations 
cin>>location;
//this might need to be done with a switch, if that is a plausable solution.

cout<<"Which room would you like to stay in?"<<endl;
//from there... it displays the availible rooms.
//then the user inputs a room
cin>> roomNumber; */

//then it lists the details...
//maybe it says the date, and the checkin time              ***Subject for discussion.
//ex. Your selection is room 125, on October 24th, 2024. Check-in time is 3:00 pm. 
//Are you sure you want to make this selection?
//input Y or N                                                  ***this could be a loop?
//If no, it puts you back into the selection of rooms.
//If yes, it says:
//Excellent! You are booked for ... (just repeats all the information).
//end of program


}

