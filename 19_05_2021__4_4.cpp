#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "instrukcje.txt";
    fstream file;
    string instrukcja;
    char letter, napis[1000];
    int i = 0, n = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            if(i % 2 == 0)
            {
                file >> instrukcja;
            }
            else
            {
                file >> letter;

                if(instrukcja == "DOPISZ")
                {
                    napis[n] = letter;
                    n++;
                }

                if(instrukcja == "ZMIEN")
                    napis[n-1] = letter;

                if(instrukcja == "USUN")
                    n--;

                if(instrukcja == "PRZESUN")
                    for(int j = 0; j < n; j++)
                        if(napis[j] == letter)
                        {
                            napis[j] = char(int(napis[j])+1);

                            if(int(napis[j]) > 90)
                                napis[j] = char(int(napis[j])-26);

                            break;
                        }
            }

            i++;
        }
    file.close();

    cout << napis;

    return 0;
}
