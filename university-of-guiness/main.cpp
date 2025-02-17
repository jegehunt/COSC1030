//
// Jeff Hunt    
// 2/14/25
// University of Guiness Programming Project
// COSC 1030
//


#include <iostream>
using namespace std;


int main() {


    char inState; // Use I for in state and O for out of state
    char roomBoard; // Us Y for Yes and N for No


    // Variables for semester cost
    int inStateTuition = 3000;
    int outStateTuition = 4500;
    int inRoomBoard = 2500;
    int outRoomBoard = 3500;
    int totalBill = 0;


    cout << "Please type 'I' if you are in-state or 'O' if you are out-of-state: "<< endl;
    cin >> inState;
    cout << "Please type 'Y' if you need room and board and 'N' if you do not: " << endl;
    cin >> roomBoard;


        if (inState == 'I')
        {
            totalBill = totalBill + inStateTuition;
        if (roomBoard == 'Y')
        {
            totalBill = totalBill + inRoomBoard;
        }


        }  
        else if (inState == 'O')
        {
            totalBill = totalBill + outStateTuition;
            if (roomBoard == 'Y')
            {
                totalBill = totalBill + outRoomBoard;
            }
        }
        cout << "Your total bill for the semester is $" << totalBill;


        return 0;
}

