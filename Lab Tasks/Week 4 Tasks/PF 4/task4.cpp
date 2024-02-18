#include<iostream>
using namespace std;
void addition(int number1, int number2);
void subtract(int number1, int number2);
void multiplication(int number1, int number2);
void division(int number1, int number2);
main()
{
int number1;
int number2;
char op;
cout << "Enter 1st number: ";
cin >> number1;
cout << "Enter 2nd number: ";
cin >> number2;
cout << "Enter an operator (+, -, *, /): ";
cin >> op;
if(op == '*'){
         multiplication(number1, number2);
}

}
void multiplication(int number1, int number2)
{
cout << "Multiplication: " << number1*number2;
}