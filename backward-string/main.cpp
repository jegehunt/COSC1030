//
// Jeff Hunt
// 4/16/24
// Backward String Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>
using namespace std;

void backward(char *);

int main() {
    //Define the array so it holds input
    const int SIZE = 80;
    char input[SIZE];
    
    cout << "Enter a string and it will be displayed backward:\n";
    cin.getline(input, SIZE);
    
    backward(input);
    return 0;
}

void backward(char *str) {
    //Get the subscrip of the last character in the string
    int last = strlen(str) -1;
    
    //Display the string backwards from last to first
    for (int index = last; index >= 0; index--) 
        cout << str[index];
    
    cout << endl;
}


