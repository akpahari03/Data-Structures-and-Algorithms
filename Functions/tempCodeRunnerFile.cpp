#include<iostream>
using namespace std;


int fibbo(int n)
{
    int a=0 , b=1 , c;
    for(int i=1 ; i<n ; i++)
    {
        //cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main()
{
    int n;
    cout<<"enter last term of fibonacci series = ";
    cin>>n;
    cout<<"last term of fibonacci series is = "<<fibbo(n);
    return 0;
}