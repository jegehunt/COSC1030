//
// Jeff Hunt
// 4/3/25
// Search Benchmarks Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
//Linear search function
void linSearch(int arr[], int size, int value) {
    //Variable for integer found
    int found = 0;
    int i;
    //Variable for number of comparisons in program
    int comparisons = 0;
    
    for (i = 0; i < size; i++) {
        comparisons += 1;
        //If statement for if it finds the value
        if(arr[i] == value) {
            found = 1;
            break;
        }
    }
    if (found)
        cout << "Found value " << value << " at index " << i << endl;
        else 
        cout << "Value " << value << " not found." << endl;
        cout << "It took " << comparisons << " comparisons to find the value." << endl;
    
    
}
//Binary search function
void binSearch (int arr[], int size, int value) {
    int left = 0, right = size - 1, mid;
    int found = 0;
    int comparisons = 0;
    
    while(left <= right) {
        mid = (left + right)/2;
        comparisons += 1;
        if (arr[mid] == value) {
            found = 1;
            break;
        }
        if (arr[mid] > value) {
            right = mid;
        }else{
        left = mid;
        }
    }
        if (found) 
            cout << "Found value " << value << " at index " << mid << endl;
            else
            cout << "Value " << value << " not found. " << endl;
            cout << "It took " << comparisons << " comparisons to find the value." << endl;
    
}

int main() {
    int arr[] = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59};
    
    cout << "Array elements:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //Calling the Linear Search Function
    cout << "\nLinear Search Algorithm to find 38 in the array." << endl;
    linSearch(arr, 20, 38);
    //calling the Binary Search Function
    cout << "\nBinary Search Algorithm to find 38 in the array." << endl;
    binSearch(arr, 20, 38);
    
    return 0;
}


