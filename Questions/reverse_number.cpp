#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,ans,digit;
    cout << "Enter the number";
    cin>>n;
    ans=0;
    while(n!=0)
    {
        digit=n%10;
        ans = (ans*10) + digit;
        n=n/10;
    }
        cout << "Reverse Number is"<<endl<<ans;
    return 0;

}