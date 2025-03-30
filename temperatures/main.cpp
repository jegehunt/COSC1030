//
// Jeff Hunt
// 3/30/25
// Temperatures
// COSC 1030
//

#include <iostream>
using namespace std;
void temp(int arr[], int t) {
    double lowest = arr[0];
    double highest = arr[0];
    double totalTemps = 0;
    for (int i = 0; i < t; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
        totalTemps = totalTemps + arr[i];
    }
    cout << "The average temperature is " << (totalTemps/t) << endl;
    cout << "The highest temperature is " << (highest) << endl;
    cout << "The lowest temperature is " << lowest << endl;
}

int main() {
    int n;
    cout << "Please enter the number of temperatures read:\n";
    cin >> n;
    if(n > 50) {
        cout << "Please enter a number of 50 or less!\n" << endl;
        main();
    }


    typedef int Array[n];
    Array temperature;

    for (int i = 0; i < n; i++){
        cout << "Enter temperature " << (i + 1) <<": ";
        cin >> temperature[i];
    }
    temp(temperature, n);

}
