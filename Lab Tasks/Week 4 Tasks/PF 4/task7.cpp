#include<iostream>
using namespace std;
void evenOrOdd(int number);
main()
{
int number;
cout << "Enter a number: ";
cin >> number;
evenOrOdd(number);
}
void evenOrOdd(int number)
{
if(number == 0,2,4,6,8){
cout << "Number "<<number<<" is even";
}

}