#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
/* */

string hotelName = "exUtopia"; //example name, can choose later
string location;
int roomNumber;

int main()
{
 //tbd
cout<<"Welcome to "<< hotelName <<"!"<<endl;
cout<<"Which location would you like to stay in?"<<endl;
//lists locations 
cin>>location;
//this might need to be done with a switch, if that is a plausable solution.

cout<<"Which room would you like to stay in?"<<endl;
//from there... it displays the availible rooms.
//then the user inputs a room
cin>> roomNumber; 

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

