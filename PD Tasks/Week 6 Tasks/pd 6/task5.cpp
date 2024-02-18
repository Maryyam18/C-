#include<iostream>
using namespace std;
float calculateFruitPrice(string nameOfFruit, string dayOfWeek, double quantity);
int main(){
 string nameOfFruit;
 string dayOfWeek;
 double quantity;

 cout << "Enter the Fruit name: ";
 cin >> nameOfFruit;

 cout << "Enter the name of the week(e.g., Monday, Sunday,...): ";
 cin >> dayOfWeek;

 cout << "Enter the quantity: ";
 cin >> quantity;

 float outPut;
 outPut = calculateFruitPrice(nameOfFruit, dayOfWeek, quantity);

  if (outPut != 0)
    {
        cout << outPut;
    }

    return 0;

}

float calculateFruitPrice(string nameOfFruit, string dayOfWeek, double quantity)
{
    float outPut = 0.0;

    if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday")
    {
        if (nameOfFruit == "banana")
        {
            outPut = quantity * 2.70;
        }
        if (nameOfFruit == "apple")
        {
            outPut = quantity * 1.25;
        }
        if (nameOfFruit == "orange")
        {
            outPut = quantity * 0.90;
        }
        if (nameOfFruit == "grapefruit")
        {
            outPut = quantity * 1.60;
        }
        if (nameOfFruit == "kiwi")
        {
            outPut = quantity * 3.00;
        }
        if (nameOfFruit == "pineapple")
        {
            outPut = quantity * 5.60;
        }
        if (nameOfFruit == "grapes")
        {
            outPut = quantity * 4.20;
        }
    }
    else if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday")
    {
        if (nameOfFruit == "banana")
        {
            outPut = quantity * 2.50;
        }
        if (nameOfFruit == "apple")
        {
            outPut = quantity * 1.20;
        }
        if (nameOfFruit == "orange")
        {
            outPut = quantity * 0.85;
        }
        if (nameOfFruit == "grapefruit")
        {
            outPut = quantity * 1.45;
        }
        if (nameOfFruit == "kiwi")
        {
            outPut = quantity * 2.70;
        }
        if (nameOfFruit == "pineapple")
        {
            outPut = quantity * 5.50;
        }
        if (nameOfFruit == "grapes")
        {
            outPut = quantity * 3.85;
        }
    }
    else
    {
        cout << "error";
        return 0;
    }
    return outPut;
}