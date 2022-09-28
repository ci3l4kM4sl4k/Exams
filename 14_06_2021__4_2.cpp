//Reads a fifty-character password from the file 'strings.txt' as follows:
//- in every twentieth line (in lines numbered 20, 40, 60, ..., 1000), there is exactly one letter of the password;
//- the hidden letter in the following lines is always in a different position: in the 20th line its the first character, in the 40th row the second symbol, in the 60th row on the third possition, ...
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
