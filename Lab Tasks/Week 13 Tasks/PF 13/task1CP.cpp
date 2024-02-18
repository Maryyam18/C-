#include <iostream>
#include <fstream>
using namespace std;
int countLines(string line);
main()
{

    string line = "";
    int totalCount = countLines(line);
    cout << "Total number of lines: " << totalCount;
}
int countLines(string line)
{
    int count2 = 0;
    fstream data;
    data.open("task1file.txt", ios::in);
    while (!data.eof())
    {
        getline(data, line);

        count2++;
    }
    data.close();
    return count2;
}