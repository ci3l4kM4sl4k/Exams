#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "napisy.txt";
    fstream file;
    int i = 0, n = 0;
    string password;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> password;
            i++;

            if(i % 20 == 0)
            {
                cout << password[n];
                n++;
            }
        }
    file.close();

    return 0;
}
