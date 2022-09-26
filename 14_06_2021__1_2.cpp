#include <iostream>
using namespace std;

///////////////////////function
int sumOfSquares(int n)
{
    int dl = 0, x = n;

    while(n != 0)
    {
        while((x*x) <= n)
        {
            n -= (x*x);
            dl++;
        }
        x--;
    }

    return dl;
}
///////////////////////////

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "Dlugosc reprezentacji kwadratowej: " << sumOfSquares(n);

    return 0;
}
