#include<iostream>
using namespace std;
int nterm(int n)
{
    return ((3*n) + 7);
}
int main()
{
    int n;
    cout << "Enter n";
    cin>>n;
    int ans=nterm(n);
    cout << ans;
}