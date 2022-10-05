#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "instrukcje.txt";
    fstream file;
    string word;
    int dlugosc = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            if(word == "DOPISZ")
                dlugosc++;

            if(word == "USUN")
                dlugosc--;
        }
    file.close();

    cout << "Dlugosc powstalego napisu wynosi: " << dlugosc;

    return 0;
}
