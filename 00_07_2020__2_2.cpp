//Algorithm for Egyptian fractions
#include <iostream>
using namespace std;

///////////////////////////function
void egyptianFractions(int p, int q)
{
    while(p>0)
    {
        int n = 0;
        while(n < (float) q/p)
            n++;

        cout << n << " ";
        p = (p*n-q);
        q *= n;
    }
}
///////////////////////////

int main()
{
    int p, q;
    cout << "Enter numbers: " << endl;
    cin >> p >> q;

    egyptianFractions(p, q);

    return 0;
}
