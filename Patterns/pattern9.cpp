#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int val=i;
        while(j<=i){
            cout << val;
            val++;
            j++;
        }
        cout << endl;
        i++;
    }
}