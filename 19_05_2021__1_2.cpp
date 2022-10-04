//algorithm that returns a number whose decimal notation is obtained from the decimal notation of n
//by converting each digit of its notation into a digit that is its complement to 9
#include <iostream>
using namespace std;

int dopelnienie(int n)
{
    int d = 0, p = 1;

    while(n > 0)
    {
        d += (9-n%10)*p;
        n /= 10;
        p *= 10;
    }

    return d;
}

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "-->" << dopelnienie(n) << endl;

    return 0;
}
