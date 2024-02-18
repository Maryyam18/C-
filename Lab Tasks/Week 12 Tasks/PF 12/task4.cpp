#include<iostream>
using namespace std;

main(){
    int const col = 3;
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    cout << "Enter the elements of the matrix: "<<endl;
    int values;
    int sum=0;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<col; j++){
            cout << "Enter element at position "<< "["<<i<<"]" "["<<j<<"]: ";
            cin >> values;
            sum=sum+values;
        }
    }
    cout << "The sum of elements in the matrix is: "<< sum;
}

