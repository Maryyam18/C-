#include<iostream>
using namespace std;
float taxCalculator(char type, float itemPrice);
float taxCal(float itemPrice , float taxRate);
int main()
{
    char type;
    float itemPrice;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> itemPrice;
    taxCalculator(type, itemPrice);
    
}
float taxCal(float itemPrice , float taxRate)
{
    float taxAmount;
    float finalPrice;
    taxAmount = itemPrice* taxRate/100;    
    finalPrice = itemPrice+taxAmount;
    return finalPrice;
}
float taxCalculator(char type, float itemPrice)
{
    float finalPrice;
    if(type == 'M')
    {
        float taxRate = 6 ;
        finalPrice = taxCal( itemPrice , taxRate);
        cout << "The final price of a vehicle type "<<type<< " after adding the text is $"<<finalPrice;
    }
    if(type == 'E')
    {
        float taxRate = 8;
        finalPrice = taxCal( itemPrice , taxRate);
        cout << "The final price of a vehicle type "<<type<< " after adding the text is $"<<finalPrice;
    }
    if(type == 'S')
    { 
        float taxRate = 10;
        finalPrice = taxCal( itemPrice , taxRate);
        cout << "The final price of a vehicle type "<<type<< " after adding the text is $"<<finalPrice;
        }
    if(type == 'V')
    {
        float taxRate = 12;
        finalPrice = taxCal( itemPrice , taxRate);
        cout << "The final price of a vehicle type "<<type<< " after adding the text is $"<<finalPrice;   
    }
    if(type == 'T')
    {
        float taxRate = 15;
        finalPrice = taxCal( itemPrice , taxRate);
        cout << "The final price of a vehicle type "<<type<< " after adding the text is $"<<finalPrice;   
    }
    return finalPrice;
}



