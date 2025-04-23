//
// Jeff Hunt
// 4/23/25
// Dental Bill Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

//Float variables for the total cost
float total(float a, float b) {
    return a + b;
}

float total(float a, float b, float c) {
    return (a + b + c);
}

int main() {
    //Integer to show whether they are a member or not
    int memberPlan;
    
    //Double variables for fees charged
    double service = 0.00;
    double testFee = 0.00;
    double medicine = 0.00;
    double totalAmount;
    
    cout << "Please enter a 1 if you are a member of the dental plan." << endl;
    cout << "Please enter any other number if you are not a member of the dental plan." << endl;
    cin >> memberPlan;
    
    cout << "Please enter the service charge amount: $";
    cin >> service;
    
    cout << "Please input the Test Fee: $";
    cin >> testFee;
    //Statement for member and nonmember charges
    if (memberPlan != 1) {
        cout << "Please input the Medicine Charges: $";
        cin >> medicine;
        totalAmount = total(service, testFee, medicine);
    }else{
        totalAmount = total(service, testFee);
    }
    cout << fixed << setprecision(2);
    cout << "The total bill is $ " << totalAmount << '\n';
}
