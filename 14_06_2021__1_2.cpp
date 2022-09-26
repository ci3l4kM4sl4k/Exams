//algorithm that for a given positive integer n computes the length of its quadratic sum representation
//where in each step the greatest possible square of an integer is taken as the next component of the sum,
//which guarantees that the sum does not exceed n.
//e.g. 23 = 4^2 + 2^2 + 1^2 + 1^2 + 1^2 -- 5 squared numbers
#include <iostream>
using namespace std;

////////////////////////function
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
/////////////////////////

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Length of its quadratic sum representation: " << sumOfSquares(n);

    return 0;
}
