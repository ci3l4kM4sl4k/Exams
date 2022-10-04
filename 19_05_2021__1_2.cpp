#include <iostream>
using namespace std;

int dopelnienie(int n)
{
    int d = 0, m = 1;

    while(n > 0)
    {
        d += (9-n%10)*m;
        n /= 10;
        m *= 10;
    }

    return d;
}

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "Dopelnieniem podanej liczby jest liczba: " << dopelnienie(n);

    return 0;
}
