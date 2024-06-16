#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int i = n;

    if (i > 0)
        while (i % 2 == 0)
        {
            i = i / 2;
        }

    if (i == 1)
    {
        cout << n << " is a power of 2";
    } else
    {
        cout << n << " is not a power of 2";
    }
    return 0;
}
