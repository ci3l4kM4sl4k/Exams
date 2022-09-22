//an algorithm that checks whether the loop counting the sum of the squares of the digits of
//the given number and then its results will end with 1, or whether it will run infinitely
#include <iostream>
using namespace std;

///////////////////////////////function
bool isLoopInfinite(int n)
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
    while(m != n && m != 4);

    return false;
}
////////////////////////////////////

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    if(isLoopInfinite(n) == true)
        cout << "It will end up as 1" << endl;
    else
        cout << "It will end up in infinite loop" << endl;

    return 0;
}
