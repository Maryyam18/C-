#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string line;
    fstream file;
    file.open("getfile.txt", ios::in);
    getline(file, line);
    file.close();
    cout << "The name in file: "<<line;
    

}