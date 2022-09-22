#include <iostream>
using namespace std;

bool sumaKwLiczby(int n)
{
    int m = n;

    while(m != 1 && m != n)
    {
        int r = 0;
        while(m != 0)
        {
            r += (m%10)*(m%10);
            m /= 10;
        }
        m = r;
    }

    if(m == 1)
        return false;
    else
        return true;
}

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    if(sumaKwLiczby(n) == true)
        cout << "Podana liczba jest liczba ciekawa" << endl;
    else
        cout << "Podana liczba jest liczba nudna" << endl;

    return 0;
}
