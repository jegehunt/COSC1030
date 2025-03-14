//
// Jeff Hunt
// 3/14/25
// Grades Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
//Function for calculating the average
void calcAverage(int sum, int numGrades, double &average) {
    if (numGrades > 0) {
        average = double(sum) / numGrades;
    }else{
        average = 0.0;
    }
}
//Main Function
int main() {
    int numGrades;
    cout << "Enter the number of grades: ";
    cin >> numGrades;
    //Entering Scores
    int sum = 0;
    for (int i = 0; i < numGrades; ++i) {
        int grade;
        cout << "Enter a score between 0 to 100; ";
        cin >> grade;
        sum += grade;
    }
    // Score grades by percentage
    double average;
    calcAverage(sum, numGrades, average);

    char letterGrade;
    if (average >= 90) {
        letterGrade = 'A';
    }else if (average >= 80) {
        letterGrade = 'B';
    }else if (average >= 70) {
        letterGrade = 'C';
    }else if (average >= 60) {
        letterGrade = 'D';
    }else {
        letterGrade = 'F';
    }
    //Final Grade shown
    cout << "The grade is " << letterGrade << endl;

    return 0;
}


