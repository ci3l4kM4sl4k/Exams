//Finds the number from 'number.txt' file with the most prime factors
//and the number with the most distinct prime factors
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt";
    fstream file;
    int n;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> n;
            cout << n << endl;

            for(int d = 2; d < n; d++)
            {
                while(n % d == 0)
                {
                    n /= d;
                    cout << d << "\t";
                }
            }
            cout << n << endl << endl;
        }
    file.close();

    return 0;
}
