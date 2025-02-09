//
// Jeff Hunt
// 2/9/2025
// Woody Furniture Company Programming Project
// COSC 1030
//

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int american;
    int modern;
    int french;

// User input numbers
cout << "Input the number of American Colonial chairs sold. ";
cin >> american;
cout << "Input the number of Modern chairs sold. ";
cin >> modern;
cout << "Input the number of French Classical chairs sold. ";
cin >> french;

// Cost of the chairs
float americanCost = 85.00;
float modernCost = 57.50;
float frenchCost = 127.75;
float totalCost;

// Total cost of each chair type sold.
americanCost = american * americanCost;
modernCost = modern * modernCost;
frenchCost = french * frenchCost;
totalCost = americanCost + modernCost + frenchCost;

cout << "The total sales of American Colonial chairs $ " << fixed << setprecision(2) << americanCost << endl;
cout << "The total sales of the Modern chairs $ " << fixed << setprecision(2) << modernCost << endl;
cout << "The total sales of the French Classical chairs $ " << fixed << setprecision(2) << frenchCost << endl;
cout << "The total sales of all the chairs sold $ " << fixed << setprecision(2) << totalCost << endl;

return 0;
}

