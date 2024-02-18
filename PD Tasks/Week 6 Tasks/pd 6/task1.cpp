#include<iostream>
using namespace std;
string decideActivity(string temperature, string humidity, string activity);
int main()
{
    string temperature, humidity, activity;
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    cout << "Recommended activity: ";
    cout << decideActivity(temperature, humidity, activity);
    return 0; 
}
string decideActivity(string temperature, string humidity, string activity)
{
    if(temperature == "warm" && humidity == "dry"){
        activity = "Play tennis";
    }
    else if (temperature == "warm" && humidity == "humid"){
        activity = "Swim";
    }
    if(temperature == "cold" && humidity == "dry"){
        activity = "Play basketball";
    }
    else if (temperature == "cold" && humidity == "humid"){
        activity = "Watch TV";
    }
    return activity;
}
