#include<iostream>
using namespace std;
float cellularCompany(char serviceCode, char time, float minutes);
main()
{
    char serviceCode;
    char time;
    float minutes;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    

    if(serviceCode == 'P' || serviceCode == 'p')
    {
      cout <<  "Enter Enter time of the call (D/d for day, N/n for night): ";
      cin >> time;
      cout << "Enter the number of minutes used: ";
      cin >> minutes;  
      cout << "Service Type: Premium"<<endl;
    }
      else if(serviceCode =='R' || serviceCode == 'r')
      {
        cout<<"Enter the number of minutes used: ";
        cin>>minutes;
        cout<<"Service Type: Regular"<<endl;
    }
       cout<<"Total Minutes Used: "<<minutes<<" minutes"<<endl;
       cout<<"Amount Due: $" <<cellularCompany(serviceCode, time, minutes);
}


      float cellularCompany(char serviceCode, char time, float minutes)
      {
        float result, total;
        if(serviceCode == 'R' || serviceCode == 'r')
        {
        if(minutes > 50)
        {
            result = minutes - 50;
            total = result * 0.2;
            return (total + 10);
        }
        if(minutes <= 50)
        {
            return 10;
        }
    
      }   
    
    if(serviceCode == 'P' || serviceCode == 'p')
    {
        if(time == 'D' || time == 'd')
        {
          if(minutes > 75)
          {
        result = minutes - 75;
        total = result * 0.1;
        total = total + 25;
        }
        }
        }
        if(minutes <=75)
        {
            total = 25;
        }
        }
        if(time == 'n'|| time == 'N')
        {
          if(minutes > 100)
          {
            result = minutes - 100;
            total = result * 0.05;
            total = total + 1875;
        }
        if(minutes <= 100){
            total = 25;
        }
        return total;
    }
  
  
      
      
      

