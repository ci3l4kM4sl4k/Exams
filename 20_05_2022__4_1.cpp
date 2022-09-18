//Returns the number of numbers in the numbers.txt file whose first and last digits are the same.
//It also returns the first one in the numbers.txt file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, amount = 0, first = 0; //variable for all numbers from file; amount of all numbers with the same first and last digit; first number with the same first and last digit
    bool found = false; //variable to check if the first number was found
    string fileName = "numbers.txt"; //name of file
    fstream file;

    file.open(fileName, ios::in);
        for(int i = 0; i < 200; i++)
        {
            file >> n;

            if(found == false)
                first = n;

            int j = 0;
            int arr[6];

            while(n != 0)
            {
                arr[j] = n%10;
                n /= 10;
                j++;
            }

            if(arr[0] == arr[j-1])
            {
                amount++;

                if(found == false)
                    found = true;
            }
        }
    file.close();

    cout << "Amount: " << amount << endl;
    cout << "First: " << first << endl;
    
    return 0;
}
