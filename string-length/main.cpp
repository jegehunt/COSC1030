//
// Jeff Hunt
// 4/24/25
// String Length Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>
using namespace std;

int getChar(const char* str) {
    int i = 0;
    while (str[i] !='\0') {
        i++;
    }
    return i;
}

int main() {
    string s;

    cout << "Please enter a string: ";
    cin >> s;

    cout << getChar(s.c_str()) << endl;

    return 0;
}
    

