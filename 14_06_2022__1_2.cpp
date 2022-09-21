//Algorithm that returns the sum of squared digits of the given number
#include <iostream>
using namespace std;

/////////////////////////function
int SumSqDigits(int n)
{
    int result = 0;

    while(n != 0)
    {
        result += (n%10)*(n%10);
        n /= 10;
    }

    return result;
}
//////////////////////////

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Sum of squared digits of the given number: " << SumSqDigits(n) << endl;

    return 0;
}
