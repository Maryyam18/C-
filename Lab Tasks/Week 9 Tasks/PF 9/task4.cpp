#include<iostream>
using namespace std;
void reverseNumber(int arr[], int number){
    for(int i = number-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    if(number <= 0){
        cout << "Invalid input. Number of elemets must be greater than 0."<<endl;
        return 0;
    }
    int arr[number];
    cout << "Enter "<< number << "numbers, one per line: " << endl;
    for(int i=0; i < number; i++){

    cin >> arr[i];

    }
    cout << "Numbers in reverse order: ";
    reverseNumber(arr, number);
    return 0;
}