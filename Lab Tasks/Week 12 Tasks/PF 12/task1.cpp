#include<iostream>
using namespace std;

void printCars(int cars[][5], int rowSize);

main(){

    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {
        {10, 7, 12, 10, 4},
        {12, 3, 5, 8, 9},
        {13, 4, 5, 7, 9},
        {4, 6, 7, 8, 9},
        {2, 4, 7, 9, 3}
        };
 printCars(cars, rowSize);
    }

    void printCars(int cars[][5], int rowSize){
        for(int row = 0; row < rowSize; row++){
            for(int column = 0; column < 5; column++){
                cout << cars[row][column] << "\t";
            }
            cout << endl;
        }
    }
