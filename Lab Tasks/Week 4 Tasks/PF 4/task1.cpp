#include<iostream>
using namespace std;
void calculateFuel(float dist);
main()
{
float dist;
cout << "Enter the distance: ";
cin >> dist;
calculateFuel(dist);
}
void calculateFuel(float dist)
{
int fuel;
int time;
fuel = dist*time;
fuel = dist*10;
cout << "Fuel needed: "<<fuel;
}

