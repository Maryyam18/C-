#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
int main()
{
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    cout << "Zodiac Sign: ";
    cout << findZodiacSign(day, month);
    return 0;
}
string findZodiacSign(int day, string month)
{
    if((month == "March" && day >= 21 && day <=31)||(month == "April" && day >=1 && day <= 19)){
        return "Aries";
    }
    else if ((month == "April" && day >= 20 && day <= 30)||(month == "May" && day >= 1 && day <= 20)){
        return "Taurus";
    }
    else if((month == "May" && day >= 21 && day <= 31)||(month == "June" && day >= 1 && day <= 20)){
        return "Gemini";
    }
    else if((month == "June" && day >= 21 && day <= 31) || (month == "July" && day >=1 && day <= 22)){
        return "Cancer";
    }
    else if((month == "July" && day >= 23 && day <=30 )||(month == "August" && day >=1 && day <= 22)){
        return "Leo";
    }
    else if((month == "August" && day >= 23 && day <= 31 )||(month == "September" && day >= 1 && day <= 22)){
        return "Virgo";
    }
    else if((month == "September" && day >= 23 && day <= 30)||(month == "October" && day >= 1 && day <=  22)){
        return "Libra";
    }
    else if((month == "October" && day >= 23 && day <= 31)||(month == "November" && day >= 1 && day <= 21)){
        return "Scorpio";
    }
    else if((month == "November" && day >= 22 && day <= 30)||(month == "December" && day >= 1 && day <= 21)){
        return "Sagittarius";
    }
    else if((month == "December" && day >= 22 && day <= 31)||(month == "January" && day>= 1 && day <= 19)){
        return "Capricon";
    }
    else if((month == "January" && day >= 20 && day <= 31)||(month == "February" && day >= 1 && day <= 18)){
        return "Aquarius";
    } 
    else if((month == "February" && day >= 19 && day <= 28)||(month == "March" && day >= 1 && day <= 20)){
        return "Pisces";
    }  
    return 0;
}

