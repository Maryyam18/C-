#include<iostream>
using namespace std;
void howManyStickers(int sideLength);
main()
{
int sideLength;
cout << "Enter the side length of the Rubik's Cube: ";
cin >> sideLength;
howManyStickers(sideLength);
}
void howManyStickers(int sideLength)
{
int stickers;
stickers = sideLength*sideLength*6;
cout << "Number of stickers needed: "<<stickers;
}
