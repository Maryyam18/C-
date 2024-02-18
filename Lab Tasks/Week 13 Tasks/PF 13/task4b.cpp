#include<iostream>
#include<fstream>
using namespace std;

main(){
    float number;
    fstream file;
    file.open("decimalfile.txt", ios::in);
    file >> number;
    file.close();
    cout << "The decimal number in the file: "<<number;
    

}