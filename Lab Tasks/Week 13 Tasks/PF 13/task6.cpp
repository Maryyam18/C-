#include <iostream>
#include <fstream>
using namespace std;

main()
{
    string line;
    fstream file;
    file.open("endfile.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
}