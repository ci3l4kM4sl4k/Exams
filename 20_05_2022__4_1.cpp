//Returns the number of numbers in the number.txt file whose first and last digits are the same.
//It also returns the first one in the number.txt file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string fileName = "przyklad.txt";
    int n, amount = 0, pierwsza = 0;;
    bool found = false;

    file.open(fileName, ios::in);
        for(int i = 0; i < 200; i++)
        {
            file >> n;

            if(found == false)
                pierwsza = n;

                cout << pierwsza << "==========\n";

            int j = 0;
            int arr[6];

            while(n != 0)
            {
                arr[j] = n%10;
                n /= 10;
                j++;
            }

            for(int c = 0; c < j; c++)
            {
                cout << arr[c] << "\t";
            }

            if(arr[0] == arr[j-1])
            {
                amount++;

                if(found == false)
                    found = true;
            }

            cout << endl;
        }
    file.close();

    cout << "Amount: " << amount << endl;
    cout << "First: " << pierwsza << endl;
    
    return 0;
}
