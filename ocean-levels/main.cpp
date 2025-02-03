//
// Jeff Hunt
// 2/2/2025
// Ocean Levels Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main() {
    double riseRate = 1.5; // Rise of the ocean in millimeters per year
    
    // Years for the rise of the ocean
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    // Code to calculate the rise for the years given
    double year5 = riseRate * years5;
    double year7 = riseRate * years7;
    double year10 = riseRate * years10;

    // Displaying the rise in millimeters for the years given
    cout << "After " << years5 << " years, the ocean's level will rise by " << year5 << " millimeters" << endl;
    cout << "After " << years7 << " years, the ocean's level will rise by " << year7 << " millimeters" << endl;
    cout << "After " << years10 << " years, the ocean's level will rise by " << year10 << " millimeters" << endl;


    return 0;
}



