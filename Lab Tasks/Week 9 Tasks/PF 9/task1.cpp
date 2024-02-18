#include<iostream>
using namespace std;
string result(string word);
main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    result(word);
}

string result(string word)
{
    for(int i=0; word[i]!='\0'; i++)
    {
        cout << word[i]<<" found at position "<<i << endl;
    
    }
}