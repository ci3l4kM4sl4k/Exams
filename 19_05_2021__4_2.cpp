#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "instrukcje.txt";
    fstream file;
    string word, last = "x", inMax;
    int max = 0, now, i = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            if(i % 2 == 0)
            {
                if(word == last)
                {
                    now++;

                    if(max < now)
                    {
                        inMax = word;
                        max = now;
                    }
                }
                else
                {
                    last = word;
                    now = 1;
                }
            }

            i++;
        }
    file.close();

    cout << "The kind of the instruction - " << inMax << ", its amount - " << max << ".";

    return 0;
}
