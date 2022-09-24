#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt";
    fstream file;
    int n, reflection, result, highestResult = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> n;

            int N = n;
            while(N != 0)
            {
                reflection *= 10;
                reflection = N % 10;
                N /= 10;
            }
            
            if(reflection - N > 0)
                result = reflection - n;
            else
                result = n - reflection;

        }
    file.close();


    return 0;
}
