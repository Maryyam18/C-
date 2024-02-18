#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

int main() {
    const int maxSize = 100; 
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter "<< n <<" numbers, one per line:"<<endl;

   

    for (int i = 0; i < n; ++i) {
        int input;

      
        std::cin >> input;

        if (isAlreadyEntered(numbers, i, input)) {
            cout << "Already Entered: "<<input;
            --i; 
        } else {
            numbers[i] = input;
        }
    }

    cout << "Unique numbers entered: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
