//
// Jeff Hunt
// 3/25/25
// Chips and Salsa Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getSales(string[], int[], int);
int getTotal(int[], int);
int largest(int[], int);
int smallest(int[], int);

int main() {
    //Constant for types of salsa
    const int SALSA_TYPES = 5;

    //Array of the salsa types
    string names[SALSA_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};

    //Array of sales for each salsa type
    int sales[SALSA_TYPES];

    // Total number sold
    int totalJars;

    //Salsa that sold the most
    int highSales;

    // Salsa that sold the least
    int  lowSales;

    //Number of jars sold of each type of salsa
    getSales(names, sales, SALSA_TYPES);

    //Total sales and high and low selling types
    totalJars = getTotal(sales, SALSA_TYPES);
    highSales = largest(sales, SALSA_TYPES);
    lowSales = smallest(sales, SALSA_TYPES);

    //Display the sales report
    cout << endl << endl;
    cout << "   Salsa Sales Report\n\n";
    cout << "Name       Jars Sold \n";
    cout << "_____________________\n";

    //Name and jars that were sold for each type of salsa
    for (int salsaType = 0; salsaType < SALSA_TYPES; salsaType++) {
        cout << setw(6) << names[salsaType] << setw(21) << sales[salsaType] << endl;
    }

    //Display the total sales, highest selling, and lowest selling
    cout << "\nTotal Sales:" << setw(15) << totalJars << endl;
    cout << "Highest Seller: " << names[highSales] << endl;
    cout << "Lowest Seller: " << names[lowSales] << endl;
    
    return 0;
}

void getSales(string names[], int sales[], int size) {
    for (int type = 0; type < size; type++) {
        cout << "How many jars of " << names[type] << " salsa did we sell last month? ";
        cin >> sales[type];

        while (sales[type] < 0) {
            cout << "Jars sold must be 0 or more. Please re-enter: ";
            cin >> sales[type];
        }
    }
}

int getTotal(int array[], int size) {
    int total = 0;
    for (int pos = 0; pos < size; pos++) 
        total += array[pos];
    return total;
}

int largest(int array[], int size) {
    int indexOfLargest = 0;

    for (int pos = 1; pos < size; pos++) {
        if (array[pos] > array[indexOfLargest])
            indexOfLargest = pos;
    }
    return indexOfLargest;
}

int smallest(int array[], int size) {
    int indexOfSmallest = 0;

    for (int pos = 1; pos < size; pos++) {
        if (array[pos] < array[indexOfSmallest])
            indexOfSmallest = pos;
    }
    return indexOfSmallest;
}
