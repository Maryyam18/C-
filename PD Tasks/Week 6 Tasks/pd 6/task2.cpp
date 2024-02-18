#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
int main()
{
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;
    float average;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
     cout << "Enter marks for Social Science: ";
     cin >> marksSocialScience;
     cout << "Enter marks for Biology: ";
     cin >> marksBiology;
     cout << "Student Name: "<<name<<endl;
     float resultA;
     resultA = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
     cout << "Perecntage: " << resultA << "%" <<endl;
     string resultB;
     resultB= calculateGrade (resultA);
     cout << "Grade: " <<resultB;

}
float calculateAverage (float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
  float average;
  average = marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology;
  average = average/5;
  return average;  
}
string calculateGrade(float average)
{
  
    if(average >= 90 && average <= 100){
        return  "A+";
    }
    else if(average >= 80 && average <= 89){
        return "A";
    }
    else if(average >= 70 && average <= 79){
        return "B+";
    }
    else if(average >= 60 && average <= 69){
        return "B";
    }
    else if(average >= 50 && average <= 59){
        return "C";
    }
    else if(average >= 40 && average <= 49){
        return "D";
    }
    else if(average < 40){
        return "F";
    }
    return 0;
}

