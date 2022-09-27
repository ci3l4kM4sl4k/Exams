//Returns the amount of digits in file 'writings.txt'
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "writings.txt";
    fstream file;
    int amount = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            char n = file.get();

            if(int(n) >= 48 && int(n) <= 57)
                amount++;
        }
    file.close();

    cout << "Amount of digits in file is: " << amount;

    return 0;
}
