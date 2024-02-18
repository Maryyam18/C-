#include<iostream>
using namespace std;
void calculatePayableAmount(string day, int purchaseAmount);
main()
{
string day;
int purchaseAmount;
cout << "Enter the day of purchase: ";
cin >> day;
cout << "Enter the total purchase amount: $";
cin >> purchaseAmount;
calculatePayableAmount(day, purchaseAmount);
}
void calculatePayableAmount(string day, int purchaseAmount)
{
if(day== "Sunday")
{
float discount;
int payableAmount;
discount = purchaseAmount*0.1;
payableAmount = purchaseAmount-discount;
cout << "Payable Amount: $" << payableAmount;
}
else
{
int payableAmount;
cout << "Payable Amount: $" << payableAmount;
}

}