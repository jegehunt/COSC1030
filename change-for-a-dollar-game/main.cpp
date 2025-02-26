//
// Jeff Hunt
// 2/26/25
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Variables
    const int penny = 1;
    const int nickle = 5;
    const int dime = 10;
    const int quarter = 25;

    int numPen;
    int numNick;
    int numDim;
    int numQuar;
    int total; //Total amount of money

    //Prompt the user to give number of coins
    cout << "Enter the number of pennies: " << endl;
    cin >> numPen;
    cout << "Enter the number of nickles: " << endl;
    cin >> numNick;
    cout << "Enter the number of dimes: "  << endl;
    cin >> numDim;
    cout << "Enter the number of quarters: "  << endl;
    cin >> numQuar;

    //Total coins entered and values together
    total = (penny * numPen) + (nickle * numNick) + (dime * numDim) + (quarter * numQuar);

    if(total == 100)
        cout << "Congratulations! You won the game!" << endl;
        else if(total > 100)
            cout << "Your total amount is more than one dollar."  << endl;
            else
            cout << "Your total amount is less than one dollar."  << endl;

    return 0;




}   

