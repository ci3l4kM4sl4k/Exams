//Algorithm that for a given sequence of n positive integers stored in an array will calculate 
//the smallest amount of elements that must be replaced in it to obtain an n-permutation
#include <iostream>
using namespace std;

//////////////////////////////////function
int permutation(int n, int arr[])
{
    int a = 0, i = 1;
    bool found;

    while(i <= n)
    {
        found = false;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == i)
                found = true; //seeks for every number in array
        }

        if(found == false)
            a++; //counts every number it didnt found
        
        i++;
    }

    return a; //returns the amount of elements to change
}
//////////////////////////////////

int main()
{
    int arr[10]; //size of array, if you want more than 10 numbers then edit this number
    int n = 0, a = 0; //n - exact size of array, a - amount of elements that need to be changed to get n-permutation

    cout << "What is the amount of numbers: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter " << i+1 << ". number: ";
        cin >> arr[i];
    }

    a = permutation(n, arr);

    cout << "Smallest amount of elements that must be replaced in order to obtain n-permutation is: " << a;

    return 0;
}
