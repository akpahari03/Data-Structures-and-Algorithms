#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin>>n;
    int space =2*n-2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        for(int j=1;j<=space;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        space-=2;
        cout << endl;
    }
    space=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout << "*";
        }
        for(int j=1;j<=space;j++)
        {
            cout << " ";
        }
        for(int j=n;j>=i;j--)
        {
            cout << "*";
        }
        space+=2;
        cout << endl;
    }
}