//
// Jeff Hunt
// 4/24/25
// Sorting Benchmarks Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;
void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int bubbleSort(int *arr,int size) {
    int count = 0;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++)
    {
    if (arr[j] > arr[j+1])
    {
    swap(arr[j],arr[j+1]);
    count++;
    }
    }
    }

    return count;
}
int selectionSort(int *arr,int size) {
    int position,count = 0;
    for (int i = 0; i < size-1; i++) {
        position = i;
        for (int j = i+1; j<size; j++) {
            if (arr[position] > arr[j])
                position = j;
            }
            if (position != i)
        {
        swap(arr[i],arr[position]);
        count++;
    }
    }
    return count;
}
void printArray(int *arr,int size) {
    for(int i=0;i<size;i++)
        cout << arr[i] << " " ;
        cout << endl;
}

int main() {
    int arrBub[20] = {1,3,4,2,8,5,6,7,12,13,18,17,16,14,15,9,10,11,20,19};
    int arrSel[20] = {1,3,4,2,8,5,6,7,12,13,18,17,16,14,15,9,10,11,20,19,};

    cout << "The Array before being sorted : ";
    printArray(arrBub,20);

    int count = bubbleSort(arrBub,20);

    cout << "The Array after being sorted : ";
    printArray(arrBub,20);

    cout << "The Array before being sorted : ";
    printArray(arrSel,20);

    int countSel = selectionSort(arrSel,20);

    cout << "The Array after being sorted : ";
    printArray(arrSel,20);

    cout << "Number of exchanges in bubble sort is : " << count << endl;
    cout << "Number of exchanges in selection sort is : " << countSel << endl;


    return 0;
}


