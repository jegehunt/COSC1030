//
// Jeff Hunt
// 2/23/25
// Calories Burned Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main()
{
    //Constant for calories per minute
    const double calsPerMin = 3.9;

    int minutes;  //Number of minutes
    double calories;  //Calories burned

    for (minutes = 10; minutes <= 30; minutes += 5)
    {
        calories = minutes * calsPerMin;
        cout << "After " << minutes << " minutes you burned " << calories << " calories.\n";
    }

    return 0;

}
