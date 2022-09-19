//Finds the number from 'number.txt' file with the most prime factors
//and the number with the most distinct prime factors
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt";
    fstream file;
    int number, maxDivisors=0, number1, maxDiffDivisors=0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            int n, tmp,  divisors = 0,  diffDivisors = 0;

            file >> n;
            tmp = n;

            int d = 2;
            while(tmp > 1)
            {
                if(tmp % d == 0)
                    diffDivisors++;

                while(tmp % d == 0)
                {                    
                    divisors++;
                    tmp /= d;
                }
                d++;
            }

            if(divisors > maxDivisors)
            {
                number = n;
                maxDivisors = divisors;
            }

            if(diffDivisors > maxDiffDivisors)
            {
                number1 = n;
                maxDiffDivisors = diffDivisors;
            }   
            
        }
    file.close();

    cout << "Number with highiest amount of prime divisors: " << number << " (" << maxDivisors << ")\n";
    cout << "Number with highiest amount of different prime divisors: " << number1 << " (" << maxDiffDivisors << ")";

    return 0;
}
