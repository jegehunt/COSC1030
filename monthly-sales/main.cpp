//
// Jeff Hunt
// 4/13/25
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

double sumYear(double* sales, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += sales[i];
    }
    return sum;
}

double avgSales(double* sales, int size) {
    double sum = sumYear(sales, size);
    return sum/size;
}

int main() {
    int size;
    cout << "Input the number of months: ";
    cin >> size;
    
    double* sales = new double[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Input the sales amount for the month " << i + 1 << ": ";
        cin >> sales[i];
    }
    double yearlySum = sumYear(sales, size);
    double average = avgSales(sales, size);
    
    cout << "Yearly sales is: " << yearlySum << endl;
    cout << "Average monthly sales is: " << average << endl;
    
    return 0;
}
