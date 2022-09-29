#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "file.txt";
    fstream file;
    char word[52];
    bool palindrom;
    string n;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            for(int i = 1; i < 51; i++)
            {
                word[i] = file.get();
            }

            n = string(1,word[25]);

            palindrom = false;

            word[0] = word[50];

            word[51] = word[1];

            for(int i = 0; i < 52; i++)
                cout << word[i];
            cout << endl << endl;

            for(int i = 1; i <= 26; i++)
            {
                if(i == 26)
                    palindrom = true;

                if(word[i] != word[51-i])
                    break;
            }

            for(int i = 0; i <= 24; i++)
            {
                if(i == 25)
                    palindrom = true;

                if(word[i] != word[50-i])
                    break;
            }

            if(palindrom == true)
                cout << "Tak";
        }
    file.close();

    return 0;
}
