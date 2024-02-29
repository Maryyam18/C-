#include<iostream>
using namespace std;
int bezoutCoff(int a,int b,int &coef1,int &coef2);
int modInverse(int a,int b,int &coef1,int &coef2);

main()
{
int a,b;
int coef1;
int coef2;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;

modInverse(a,b,coef1,coef2);


}

int bezoutCoff(int a,int b,int &coef1,int &coef2)
{
int prevCoef1=1;
int prevCoef2=0;
int currCoef1=0;
int currCoef2=1;

while(b!=0)
{
    int quotient=a/b;

    int x=prevCoef1-quotient*currCoef1;
    int y=prevCoef2-quotient*currCoef2;
    prevCoef1=currCoef1;
    prevCoef2=currCoef2;
    currCoef1=x;
    currCoef2=y;


    int mode=a%b;
    a=b;
    b=mode;
}
coef1=prevCoef1;
coef2=prevCoef2;

}

int modInverse(int a,int b,int &coef1,int &coef2)
{
int inverse;
bezoutCoff(a, b,coef1,coef2);
if(((a*coef1 )%b) == 1)
{
    cout<<"The inverse is: "<<coef1;
}
else if(((a*coef2 )%b) == 1)
{

cout<<"The inverse is: "<<coef2;
}
else {
    cout<<"No inverse exists."<<endl;
}
}