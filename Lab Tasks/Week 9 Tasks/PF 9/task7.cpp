#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size){
    double sum=0;
  for(double i = resistance; i>=0; i++){
        cout << resistance[i];
        
    }
    cout << endl;
}
int main(){
    int size;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> size;

    double resistance[size];
    cout << "Enter the resistance values (in ohms) of the"<< size << "resistors, one per line: " << endl;
    for(int i=0; i < size; i++){

    cin >> resistance[i];

}  
cout << "The total resistance of the series circuit is ohms: ";
calculateTotalResistance(resistance, size);
return 0;
}
