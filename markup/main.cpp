//
// Jeff Hunt
// 3/11/25
// Markup Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);


int main() {
    double wholesale;
    double markupPercent;
    double retail;


    // Get the wholesale cost
    cout << "Enter the wholesale cost: ";
    cin >> wholesale;


    // Get the markup percentage
    cout << "Enter the markup percentage: ";
    cin >> markupPercent;


    // Get the retail price
    retail = calculateRetail(wholesale, markupPercent);


    //Display the retail price
    cout << "The retail price is $"  << setprecision(2) << fixed << retail << endl;


    return 0;


}


double calculateRetail(double wholesale, double markupPercent) {
    double markup = wholesale * markupPercent / 100;
    return wholesale + markup;
}

