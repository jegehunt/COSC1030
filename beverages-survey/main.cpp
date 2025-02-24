//
// Jeff Hunt
// 2/23/25
// Beverages Survey Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main() {
    // Prompt user with drink choices
    cout << "Survey on bevaerages." << endl;
    cout << "1. Coffee\n";
    cout << "2. Tea\n";
    cout << "3. Coke\n";
    cout << "4. Orange Juice\n";
    
    

    //Variables for drinks
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int orangeJuice = 0;

    int count = 0;
    int choice;

    do {
        count++;
        cout << "Please enter the favorite drink of person #" << count << ":";
        cout << "Choose 1,2,3, or 4 from the menu or -1 to exit." << endl;
        cin >> choice;
        if (choice == 1)
        coffee++;
        else if (choice == 2)
        tea++;
        else if (choice == 3)
        coke++;
        else if (choice == 4)
        orangeJuice++;

        }while (choice != -1);
    cout << "The total number of people surveyed is " << count-1 << "." << endl;
    
    return 0;
}
