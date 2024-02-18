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
if(fuel < 100)
{
cout << "Fuel needed: 100";
}
else
{
cout << "Fuel needed: "<<fuel;
}

}
