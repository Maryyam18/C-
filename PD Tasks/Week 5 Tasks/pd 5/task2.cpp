#include<iostream>
using namespace std;
void pyramidVolume(int length, int width, int height, string outputUnit);
main()
{
int length, width, height;
string outputUnit;
cout << "Enter the length of the pyramid (in meters): ";
cin >> length;
cout << "Enter the width of the pyramid (in meters): ";
cin >> width;
cout << "Enter the height of the pyramid (in metrs): ";
cin >> height;
cout << "Enter the desired output unit (milimeters, centimeters, meters, kilometers): ";
cin >> outputUnit;
pyramidVolume(length, width, height, outputUnit);
}
void pyramidVolume(int length, int width, int height, string outputUnit)
{
    float  pyramidVolume = (length*width*height)/3;
    cout << "The volume of the pyramid is: " << pyramidVolume<< " cubic " << outputUnit;
}
