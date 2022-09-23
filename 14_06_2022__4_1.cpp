#include <iostream>
#include <fstream>
using namespace std;

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

int main()
{
    string fileName = "liczby.txt";
    fstream file;
    int arr[100];
    int i = 0;

    file.open(fileName, ios::in);
        while(!file.eof())
        {
            file >> arr[i];
            i++;
        }
    file.close();

    reflection(arr, i);

    return 0;
}
