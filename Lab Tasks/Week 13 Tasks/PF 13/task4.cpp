#include<iostream>
#include<fstream>
using namespace std;

main(){
    int number;
    fstream file;
    file.open("numberfile.txt", ios::in);
    file >> number;
    file.close();
    cout << "The number in the file: "<<number;
    

}