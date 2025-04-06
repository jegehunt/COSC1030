//
// Jeff Hunt
// 4/6/25
// Integer Array
// COSC 1030
//
#include <iostream>
using namespace std;

//Bubble Sort Algorithm
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j= 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j + 1] = temp;
            }
        }
    }   
}
//Binary Search Algorithm
int binSearch(int arr[], int size, int value) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == value) {
            return mid;
        } else if (arr[mid] < value) {
            low = mid + 1;
        }else {
            high = mid - 1; 
        }
    }
    return - 1;
}

double findMean(int arr[], int size) {
    int sum = 0; 
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

//Main function
int main() {
    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    int arr[50]; //Maximum of 50 elements
    cout << "Enter the numbers for the array:\n";
    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr [i];
    }

    bubbleSort(arr, numElements); 

    int searchValue;
    cout << "Enter the value you want to search: ";
    cin >> searchValue;

    int location = binSearch(arr, numElements, searchValue);

    cout << "Size of array: " << numElements << endl;

    cout << "Array as entered by the user: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sorted array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Search value: " << searchValue << endl;

    if (location != -1) {
        cout << "Location in sorted array: " << location << endl;
    } else {
        cout << "Value was not found in the array." << endl;
    }

    double mean = findMean(arr, numElements);
    cout << "Mean of the data set: " << mean << endl;

    return 0;
}


