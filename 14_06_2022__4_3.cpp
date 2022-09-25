#include <iostream>
#include <fstream>
using namespace std;

int reflection(int n)
{
    int N = 0;

    while(n != 0)
    {
        N *= 10;
        N += n % 10;
        n /= 10;
    }

    return N;
}

bool isPrimeNumber(int n)
{
    int i = 2;
    while(i != n)
    {
        if(n % i == 0)
            break;
        
        i++;
    }

    return i == n;
}

int main()
{
    string fileName = "liczby.txt";
    fstream file;
    int n;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> n;
            cout << n << "\t" << reflection(n);

            if(isPrimeNumber(n) == true && isPrimeNumber(reflection(n)) == true)
                cout << "\tIts prime number\n";
            else
                cout << endl;
        }
    file.close();


    return 0;
}
