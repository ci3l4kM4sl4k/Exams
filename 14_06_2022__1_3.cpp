//
#include <iostream>
using namespace std;

///////////////////////////////function
bool sumaKwLiczby(int n)
{
    int m = n;

    do
    {
        if(m == 1)
            return true;

        int r = 0;
        while(m != 0)
        {
            r += (m%10)*(m%10);
            m /= 10;
        }
        m = r;
    }
    while(m != n);

    return false;
}
////////////////////////////////////

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    if(sumaKwLiczby(n) == true)
        cout << "Podana liczba jest liczba nudna" << endl;
    else
        cout << "Podana liczba jest liczba ciekawa" << endl;

    return 0;
}
