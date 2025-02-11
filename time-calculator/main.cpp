//
// Jeff Hunt
// 2/11/25
// Time Calculator Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main()
{
    // Constants
    const double seconds_minute = 60.0; 
    const double seconds_hour = 3600.0;
    const double seconds_day = 86400.0;

    // Variable that holds number of seconds
    int seconds;

    // Input number of seconds from user
    cout << "Enter a number of seconds: ";
    cin >> seconds;

    // Display the number of minutes
    if (seconds >= seconds_minute)
    {
        double minutes = seconds / seconds_minute;
        cout << "There are " << minutes << " minutes in " << seconds << " seconds.\n";
    }

    // Display the number of hours
    if (seconds >= seconds_hour)
    {
        double hours = seconds / seconds_hour;
        cout << "There are " << hours << " hours in " << seconds << " seconds.\n";
    }

    // Display the number of days 
    if (seconds >= seconds_day)
    {
        double days = seconds / seconds_day;
        cout << "There are " << days << " days in " << days << " seconds.\n";
    }
    return 0;
}


