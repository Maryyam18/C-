#include<iostream>
using namespace std;

void printCars(int identity[][3], int values);

main(){
    int const row = 3;
    int const col = 3;
    cout << "Enter the elements of the matrix: "<<endl;
    int values;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter element at position "<< "["<<i<<"]" "["<<j<<"]: ";
            cin >> values;
      
           
