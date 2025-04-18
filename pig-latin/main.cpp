//
// Jeff Hunt
// 4/17/25
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 80;
void pigLatin(char const * const );
int main() {

    char sentence[SIZE], *token;
    //The user inputs a sentence to be converted
    cout << "Please enter a sentence:\n";
    cin.getline(sentence, SIZE);

    cout << "\nPig Latin:\n";
    token = strtok(sentence, " .,;");

    //Coverts the words to pig latin
    while (token) {
pigLatin(token);
token = strtok(0, " .,;");
    if (token)
        cout <<" ";
    }
    cout << '.' << endl;

    return 0;
}
//Pig Latin Function
void pigLatin(char const * const word) {
    int len = strlen(word);
    for (int i = 1; i < len; ++i)
        cout << *(word + i);
        cout << *word << "AY";
}
