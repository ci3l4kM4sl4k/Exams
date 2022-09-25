//algorithm that returns a number from a file, if that number and its reflection are prime numbers 
#include <iostream>
#include <fstream>
using namespace std;

/////////////////////function for reflections of numbers
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
/////////////////////

//////////////////////////function to check if given number is prime number
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
///////////////////////////

int main()
{
    string fileName = "numbers.txt"; //name of file
    fstream file;
    int n;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> n;
            
            if(isPrimeNumber(n) == true && isPrimeNumber(reflection(n)) == true) //checks if number and its reflection are prime numbers
                cout << n << endl;
        }
    file.close();

    return 0;
}
