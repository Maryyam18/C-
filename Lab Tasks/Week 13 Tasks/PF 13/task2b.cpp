#include<iostream>
#include<fstream>
using namespace std;

main(){

    fstream file;
    file.open("floatfile.txt", ios::out);
    float numbers;
    cin >> numbers;
    file << numbers;
    file.close();

}