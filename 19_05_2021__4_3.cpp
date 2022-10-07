//an algorithm that calculates which letter is most often entered after order "ADD", gives that letter and how many times it is added
#include <iostream>
#include <fstream>
using namespace std;

int import(string letters[], string fileName)
{
    fstream file;
    string word, previous = "";
    int i = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            if(previous == "DOPISZ")
            {
                letters[i] = word;
                i++;
            }

            previous = word;
        }
    file.close();

    return i;
}

void letter(string letters[], int i)
{
    string theLetter;
    int maxCount = 0;

    for(int j = 0; j < i; j++)
    {
        int count = 0;

        for(int t = 0; t < i; t++)
            if(letters[j] == letters[t])
                count++;

        if(count > maxCount)
        {
            maxCount = count;
            theLetter = letters[j];
        }
    }

    cout << theLetter << " " << maxCount;
}

int main()
{
    string fileName = "instrukcje.txt"; //name of file
    string letters[1000];//array for every matching letter

    int i = import(letters, fileName);

    letter(letters, i);

    return 0;
}
