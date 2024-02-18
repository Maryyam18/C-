#include<iostream>
#include<string>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays) ;
int main() {
    string month;
    int numberOfStays;

    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;

    cout << "Enter the number of stays: ";
    cin >> numberOfStays;

    string result = calculateHotelPrices(month, numberOfStays);
    cout << result;

    return 0;
}
string calculateHotelPrices(string month, int numberOfStays) {
       
     float  studioPrice = 50.0;
     float  apartmentPrice = 65.0;

    if (month == "May" || month == "October") 
    {
        

        if (numberOfStays > 14)
         {
            studioPrice *= 0.7;
            apartmentPrice *= 0.9; 
        }
         else if (numberOfStays > 7)
          {
            studioPrice *= 0.95; 
        }
    } else if (month == "June" || month == "September")
     {
        studioPrice = 75.20;
        apartmentPrice = 68.70;

        if (numberOfStays > 14) 
        {
            studioPrice *= 0.8; 
        }
    } else if (month == "July" || month == "August") 
    {
        studioPrice = 76.0;
        apartmentPrice = 77.0;
    }

    double totalStudioPrice = studioPrice * numberOfStays;
    double totalApartmentPrice = apartmentPrice * numberOfStays;
    if (numberOfStays > 14) 
        totalApartmentPrice -=totalApartmentPrice * 0.1; 
        

    string output = "Apartment: " + to_string(totalApartmentPrice) + "$.";
    output += "\nStudio: " + to_string(totalStudioPrice) + "$.";

    return output;
}

