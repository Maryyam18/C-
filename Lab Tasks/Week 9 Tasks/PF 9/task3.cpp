#include<iostream>
using namespace std;
string nextLetter(string word);
main(){
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    nextLetter(word);
}
string nextLetter(string word){
    char character;
    cout << "Shifted string: ";
    for(int i=0; word[i]!='\0'; i++)
    {
        if(word[i] == 'Z'){
            cout << 'A';
        }
        else if(word[i] == 'z'){
            cout << 'a';
        }
        else if(word[i] == ' '){
            cout << word[i];
        }
        else{
            char character2 = word[i];
            int asciiCode=character2;
            asciiCode++;
            character=asciiCode;
            cout << character;
        }

    }
}