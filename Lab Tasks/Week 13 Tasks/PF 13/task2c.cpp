#include<iostream>
#include<fstream>
using namespace std;

main(){

    fstream file;
    file.open("charfile.txt", ios::out);
    char word;
    cin >> word;
    file << word;
    file.close();

}