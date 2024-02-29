#include<iostream>
using namespace std;
int GCD(int a,int b);

main()
{
int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;

int result;
result=GCD(a,b);
cout<<"The GCD of "<<a<<" and "<<b<<" is: "<<result<<endl;

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