#include<iostream>
using namespace std;
int LCM(int a,int b);
int GCD(int a,int b);

main()
{
int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;

int result;
result=LCM(a,b);
cout<<"The LCM of "<<a<<" and "<<b<<" is: "<<result<<endl;
}

int GCD(int a,int b)
{
    while(a != 0)
    {
        int swap;
        swap=a;
        a = b%a;
        b=swap;
    }
    return b;
}

int LCM(int a,int b)
{   
    int output;
    int num;
    output=GCD(a,b);
    
    num=(a*b)/output;
    return num;
}