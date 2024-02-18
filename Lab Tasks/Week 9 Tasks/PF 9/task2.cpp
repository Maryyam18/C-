#include<iostream>
using namespace std;
string result(string word);
main(){
    string word;
    cout << "Enter a string: ";
    cin >> word;
    result(word);
}
string result(string word){
    cout << "Reversed String: ";
    for(int i=4; i>=0;  i--){
       cout <<word[i];
    }
     
}