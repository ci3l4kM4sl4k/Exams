//Returns the number of numbers in the number.txt file whose first and last digits are the same.
//It also returns the first one in the number.txt file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    int arr[200];
    int j = 0, n = 0;

    file.open("przyklad.txt", ios::in);
        for(int i = 0; i < 200; i++)
        {
            file >> arr[i];
        }
    file.close();

    for(int i = 0; i < 200; i++)
    {
        cout << arr[i] << "\n";
    }

    cout << "=========================================================\n";

    int last = 0, amount = 0;

    for(int i = 0; i < 200; i++)
    {
        j = 0;
        while(arr[i] != 0)
        {
            n = arr[i] % 10;

            if(j == 0)
                last = n;

            arr[i] /= 10;
            j++;
            cout << n << "\t";
        }

        if(last == n)
        {
            cout << "TUTAJ!!!\t"; 
            amount++;
        }

        cout << last << endl;
    }

    cout << "Amount: " << amount << endl;

    return 0;
}
