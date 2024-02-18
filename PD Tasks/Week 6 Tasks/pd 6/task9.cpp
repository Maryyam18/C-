#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int height, int xCoordinateCoordinate, int yCoordinate);
int main() {
    int height, xCoordinateCoordinate, yCoordinate;

    cout << "Enter height: ";
    cin >> height;
    cout << "Enter xCoordinate coordinate: ";
    cin >> xCoordinateCoordinate;
    cout << "Enter yCoordinate coordinate: ";
    cin >> yCoordinate;

    string result = checkPointPosition(height, xCoordinateCoordinate, yCoordinate);
    cout << result <<endl;

    return 0;
}

string checkPointPosition(int height, int xCoordinate, int yCoordinate)
 {
    
    if( xCoordinate >= 0 && xCoordinate <= 3*height)
    {
        if ( yCoordinate == 0 || yCoordinate == height)
        return "Border"; 
    }

    if ( yCoordinate >= 0 && yCoordinate <= 4*height )
    {
        if ( xCoordinate == 0 || xCoordinate == 2 * height )
        return "Border";
    }
    if ( xCoordinate == height  && yCoordinate >= height &&  yCoordinate <= 3 * height )
    return "Border";
    
    else if ( xCoordinate > 0 && xCoordinate < 2 * height  && yCoordinate > 0 && yCoordinate < 4 * height )
     return "Inside";

     else 
     return "Outside";
}

    
  

