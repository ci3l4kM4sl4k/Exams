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
    int round = 0;

    if(x > y)
        while(x != 0)
        {
            x /= 10;
            round++;
        }
    else
        while(y != 0)
        {
            y /= 10;
            round++;
        }

    return round;
}

int main()
{
    int k, x, y;

    cout << "Enter the amount of rounds: ";
    cin >> k;

    cout << "Enter team 1 number: ";
    cin >> x;

    cout << "Enter team 2 number: ";
    cin >> y;

    cout << "The teams will face off in the round " << turniej(k, decToBin(x), decToBin(y));

    return 0;
}
