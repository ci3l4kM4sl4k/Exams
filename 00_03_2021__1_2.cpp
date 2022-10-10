#include <iostream>
using namespace std;

int decToBin(int x)
{
    int y = 0, i = 1;

    while(x != 0)
    {
        y += (x%2) * i;
        x /= 2;
        i *= 10;
    }

  return y;
}

int turniej(int k, int x, int y)
{
    int z = 0;

    if(x > y)
        while(x != 0)
        {
            x /= 10;
            z++;
        }
    else
        while(y != 0)
        {
            y /= 10;
            z++;
        }

    return z;
}

int main()
{
    int k, x, y;

    cout << "Podaj ilosc rund: ";
    cin >> k;

    cout << "Podaj numer druzyny1: ";
    cin >> x;

    cout << "Podaj numer druzyny2: ";
    cin >> y;

    cout << turniej(k, decToBin(x), decToBin(y));

    return 0;
}
