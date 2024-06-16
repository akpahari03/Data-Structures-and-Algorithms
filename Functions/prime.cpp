#include <iostream>
using namespace std;
bool check(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (check(n))
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime number";
    }
}