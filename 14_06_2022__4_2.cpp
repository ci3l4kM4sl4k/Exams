//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "liczby.txt";
    fstream file;
    int n, reflection, result, number = 0, highestResult = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> n;

            reflection = 0;
            int N = n;
            while(N != 0)
            {
                reflection *= 10;
                reflection += N % 10;
                N /= 10;
            }
            
            if(reflection - n > 0)
                result = reflection - n;
            else
                result = n - reflection;

            if(result > highestResult)
            {
                number = n;
                highestResult = result;
            }
        }
    file.close();

    cout << number << " " << highestResult;

    return 0;
}
