#include<iostream>
using namespace std;
void testScore(int score);
main()
{
int score;
cout << "Enter your score: ";
cin >> score;
testScore(score);
}
void testScore(int score)
{
if(score > 50)
{
cout << "Pass";
}
else
{
cout << "Fail";
}

}