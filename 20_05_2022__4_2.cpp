//Finds the number from 'number.txt' file with the most prime factors
//and the number with the most distinct prime factors
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt";
    fstream file;
    int n, number, maxDivisors=0, number2, maxDiffDivisors=0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            int tmp,  divisors = 0,  diffDivisors = 0;

            file >> n;
            cout << n << endl;

            tmp = n;

            int d = 2;
            while(d < n)
            {
                while(n % d == 0)
                {                    
                    divisors++;
                    n /= d;
                    cout << d << "\t";
                }

                d++;

                if(n % d == 0)
                    diffDivisors++;
            }
            cout << n << endl << endl;

            if(divisors > maxDivisors)
                number = tmp;

            if(diffDivisors > maxDiffDivisors)
                number2 = tmp;
                
            
        }
    file.close();

    cout << "\nNumber with highiest amount of prime divisors: " << number << " (" << maxDivisors << ")\n";
    cout << "\nNumber with highiest amount of prime divisors: " << number2 << " (" << maxDiffDivisors << ")\n";

    return 0;
}
