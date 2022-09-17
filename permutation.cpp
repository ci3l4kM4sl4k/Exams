//Algorithm that for a given sequence of n positive integers stored in an array will calculate 
//the smallest amount of elements that must be replaced in it to obtain an n-permutation
#include <iostream>
using namespace std;

int permutation(int n, int arr[])
{
    int a = 0, i = 1;
    bool found = false;

    while(i <= n)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == i)
                found = true;
        }

        if(found == false)
            a++;

        found = false;
        i++;
    }

    return a;
}

int main()
{
    int arr[10];
    int n = 0, a = 0;

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
