//Algorithm that reflects given numbers (e.g. 1234 to 4321) and than reads them, if they are divisible by 17
#include <iostream>
#include <fstream>
using namespace std;

/////////////////////////////////////function
void reflection(int arr[100], int n)
{
    
    for(int i = 0; i < n; i++)
    {
        int N = 0;

        while(arr[i] != 0)
        {
            N *= 10;
            N += arr[i]%10;
            arr[i] /= 10;
        }

        if(N % 17 == 0)
            cout << N << endl;
    }
}
//////////////////////////////////////

int main()
{
    string fileName = "numbers.txt"; //file name
    fstream file;
    int arr[100];

    file.open(fileName, ios::in); //imports numbers from file
        int i = 0;

        while(!file.eof())
        {
            file >> arr[i];
            i++;
        }
    file.close();

    reflection(arr, i); //usage of function

    return 0;
}
