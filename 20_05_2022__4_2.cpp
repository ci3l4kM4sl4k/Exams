//Finds the number from 'numbers.txt' file with the most prime factors
//and the number with the most distinct prime factors
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "numbers.txt"; //file name
    fstream file;
    int number, maxDivisors=0, number1, maxDiffDivisors=0; //number with highest amount of prime divisors; amount of its divisors;number with highest amount of differend prime divisors; amount of its divisors

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            int n, divisors = 0, diffDivisors = 0; //curently used number; variable for amount of its prime divisors, variable for amount of its different prime divisors, 

            file >> n;
            int tmp = n; //temporal variable for checks for amount of divisors

            for(int d = 2; tmp > 1; d++) //loop that checks divisors
            {
                if(tmp % d == 0)
                    diffDivisors++;

                while(tmp % d == 0)
                {                    
                    divisors++;
                    tmp /= d;
                }
            }

            if(divisors > maxDivisors) //checks if current number has more prime divisors
            {
                number = n;
                maxDivisors = divisors;
            }

            if(diffDivisors > maxDiffDivisors) //checks if current number has more different prime divisors
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
