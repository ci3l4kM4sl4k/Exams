#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "przyklad.txt";
    fstream file;
    int arr[200], ;

    file.open(fileName, ios::in);
        for(int i = 0; i < 200; i++)\
            file >> arr[i];
    file.close();

    for(int i = 0; i < 200; i++)
    {
        for(int j = 0; j < 200; j++)
        {
            for(int z = 0; z < 200; z++)
            {
                if(arr[z] % arr[j] == 0 && arr[j] % arr[i] == 0 && arr[i] != arr[j] && arr[j] != arr[z])
                {
                    cout << arr[i] << "\t" << arr[j] << "\t" << arr[z] << endl;
                }
            }
        }
    }

    return 0;
}
