#include <iostream>
using namespace std;

int SumaKwCyfr(int n)
{
    int sumaKwCyfr = 0;

    while(n != 0)
    {
        sumaKwCyfr += (n%10)*(n%10);
        n /= 10;
    }

    return sumaKwCyfr;
}

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "Suma kwadratow cyfr podanej liczby wynosi: " << SumaKwCyfr(n) << endl;

    return 0;
}
