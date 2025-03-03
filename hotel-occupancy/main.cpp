//
// Jeff Hunt
// 3/2/25
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

int main() {
    //Hotel Variables
    int floors;
    int floorRooms;
    int occupiedRooms;
    int totalRooms = 0;
    int totalOccupied = 0;
    float percentage;

    //Number of floors
    cout << "Enter the number of floors: ";
    cin >> floors;

    //Loop for each floor
    for (int i = 1; i <= floors; i++) {
        cout << "Enter the number of rooms on floor " << i << ": ";
        cin >> floorRooms;

        cout << "Enter number of rooms that are occupied on the floor " << i << ": ";
        cin >> occupiedRooms;

        totalRooms = totalOccupied + floorRooms;

        totalOccupied = totalOccupied + occupiedRooms;
    }

    cout << "\n";
    cout << "Total rooms in the hotel: " << totalRooms << endl;
    cout << "Total rooms that are occupied: " << totalOccupied << endl;
    cout << "Total number of rooms that are not occupied: " << (totalRooms - totalOccupied) << endl;
    
    //Percentage of rooms that are occupied
    percentage = (totalOccupied/(float)totalRooms) * 100;

    cout << "Percentage of occupied rooms: " << percentage << " %" << endl;

    return 0;
}

