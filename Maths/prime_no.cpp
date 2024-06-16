#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if(a==1) return false;
    for(int i=2;i<a;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;
    if(isPrime(a)) cout<<"It is prime number";
    else cout<<"Not a prime number";
    return 0;
}