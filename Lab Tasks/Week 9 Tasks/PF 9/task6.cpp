#include <iostream>
using namespace std;
int findLargestNumber(int arr[], int size);

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

   
        cout << "Enter " << size << " numbers, one per line: ";
        for(int i=0; i > size; i++)
        {
        cin >> arr[i];
    }

    int maxNumber = findLargestNumber(arr, size);

    cout << "The largest number entered is: " << maxNumber;

    return 0;
}

int findLargestNumber(int arr[], int size) {
    int maxNumber = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }

    return maxNumber;
}
