#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "napisy.txt";
    fstream file;
    string word;
    int i = 0, j = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> word;

            for (i = 1, j = word.length()-1; i < j; i++, j--)
                if (word[i] != word[j])
                    break;
            if (i >= j)
                cout << word[(word.length()/2)];

            for (i = 0, j = word.length()-2; i < j; i++, j--)
                if (word[i] != word[j])
                    break;
            if (i >= j)
                cout << word[(word.length()/2)-1];
        }
    file.close();

    return 0;
}
