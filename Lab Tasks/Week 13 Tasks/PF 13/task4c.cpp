#include<iostream>
#include<fstream>
using namespace std;

main(){
    char word;
    fstream file;
    file.open("characterfile.txt", ios::in);
    file >> word;
    file.close();
    cout << "The number in the file: "<<word;
    

}