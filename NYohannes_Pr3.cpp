/*
 * Class: CMSC140 CRN 20088
 * Instructor: Ahmed Tarek
 * Project<3>
 * Due Date: 10/31/22
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nathnael Yohannes
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
    double occupancyRate, singleRoomsOccupied=0, doubleRoomsOccupied=0, kingRoomsOccupied=0, suiteRoomsOccupied=0;
    int numRooms, numFloors, totalRoomsOccupied=0, totalRoomsUnoccupied=0, totalRooms=0;
    int singleRoomPrice = 60, doubleRoomPrice = 75, kingRoomPrice = 100, suiteRoomPrice = 150, hotelIncome=0, total;
    string location;

    cout << "================================================================================================ " << endl;
    cout << "================================================================================================ " << endl;
    cout << setw(45) << right << "Bluemont Hotel " << endl;
    cout << "================================================================================================ " << endl;
    cout << "================================================================================================ " << endl;

    cout << "Enter the location of this hotel chain: ";
    cin >> location;

    cout << "Enter total number of floors of the hotel: ";
    cin >> numFloors;

    while(numFloors < 1 || numFloors > 5){
        cout << "Number of floors should be between 1 and 5!! please try again. " << endl;
        cout << "Enter total number of floors of the hotel: ";
        cin >> numFloors;
    }

    for(int i = 0; i < numFloors; i++){
    cout << endl << "Enter total number of rooms in the " << (i + 1) << " floor: ";
    cin >> numRooms;
     while(numRooms < 1 || numRooms > 30){
        cout << "Number of rooms should be between 1 and 30!! please try again. " << endl;
        cout << "Enter total number of rooms in the " << (i + 1) << " floor: ";
        cin >> numRooms;
    }

    cout << endl << "How many SINGLE rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> singleRoomsOccupied;
     while(singleRoomsOccupied < 0 || singleRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
         cout << "How many SINGLE rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> singleRoomsOccupied;
     }

    cout << "How many DOUBLE rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> doubleRoomsOccupied;
     while(doubleRoomsOccupied < 0 || doubleRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
        cout << "How many DOUBLE rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> doubleRoomsOccupied;
     }

    cout << "How many KING rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> kingRoomsOccupied;
     while(kingRoomsOccupied < 0 || kingRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
        cout << "How many KING rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> kingRoomsOccupied;
     }

    cout << "How many SUITE rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> suiteRoomsOccupied;
     while(suiteRoomsOccupied < 0 || suiteRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
        cout << "How many SUITE rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> suiteRoomsOccupied;
     }



     
     while(singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suiteRoomsOccupied > numRooms){
        cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl;
        cout << endl << "Enter total number of rooms in the " << (i + 1) << " floor: ";
    cin >> numRooms;
     while(numRooms < 1 || numRooms > 30){
        cout << "Number of rooms should be between 1 and 30!! please try again. " << endl;
        cout << "Enter total number of rooms in the " << (i + 1) << " floor: ";
        cin >> numRooms;
    }

    cout << endl << "How many SINGLE rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> singleRoomsOccupied;
     while(singleRoomsOccupied < 0 || singleRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
         cout << "How many SINGLE rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> singleRoomsOccupied;
     }

    cout << "How many DOUBLE rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> doubleRoomsOccupied;
     while(doubleRoomsOccupied < 0 || doubleRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
        cout << "How many DOUBLE rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> doubleRoomsOccupied;
     }

    cout << "How many KING rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> kingRoomsOccupied;
     while(kingRoomsOccupied < 0 || kingRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
        cout << "How many KING rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> kingRoomsOccupied;
     }

    cout << "How many SUITE rooms are occupied on the " << (i + 1) << " floor: ";
    cin >> suiteRoomsOccupied;
     while(suiteRoomsOccupied < 0 || suiteRoomsOccupied > numRooms){
        cout << "Number of rooms occupied should be between 1 and " << numRooms << "!! please try again. " << endl;
        cout << "How many SUITE rooms are occupied on the " << (i + 1) << " floor: ";
        cin >> suiteRoomsOccupied;
     }


     }
    

      hotelIncome += (singleRoomsOccupied * singleRoomPrice) + (doubleRoomsOccupied * doubleRoomPrice) + (kingRoomsOccupied * kingRoomPrice) + (suiteRoomsOccupied * suiteRoomPrice);
      totalRooms += numRooms;
      totalRoomsOccupied += singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suiteRoomsOccupied;
    }
      totalRoomsUnoccupied = totalRooms - totalRoomsOccupied;
      occupancyRate = ((double)totalRoomsOccupied / (double)totalRooms) * 100;

   cout << "==========================================================================================================" << endl;
   cout << setw(45) << right << "Bluemont Hotel located in " << location << endl << endl;
   cout << setw(55) << right << "TODAY'S ROOM RATES <US$/night> " << endl << endl;
   cout << setw(20) << "Single Room" << setw(20) << "Double Room" << setw(20) << "King Room" << setw(20);
   cout << "Suite Room" << endl << endl;
   cout << setw(20) << "60" << setw(20) << "75" << setw(20) << "100" << setw(20);
   cout << "150" << endl;
   cout << "==========================================================================================================" << endl;

   cout << fixed << setprecision(2) << showpoint;

   cout << setw(30) << right << "Hotel Income:" << setw(10) << "$" << hotelIncome << endl;
   cout << setw(30) << right << "Total # of rooms:" << setw(10) << totalRooms << endl;
   cout << setw(30) << right << "Total # of Occupied rooms:" << setw(10) << totalRoomsOccupied << endl;
   cout << setw(30) << right << "Total # of Unoccupied rooms:" << setw(10) << totalRoomsUnoccupied << endl;
   cout << setw(30) << right << "Occupancy rate:" << setw(10) << occupancyRate << "%" << endl;

   cout << "Thank you for testing my program!! " << endl;
   cout << "PROGRAMMER: Nathnael Yohannes" << endl;
   cout << "CMSC Common Project 3 " << endl;
   cout << "Due Date: 10/31/22 " << endl;
   
}
    
