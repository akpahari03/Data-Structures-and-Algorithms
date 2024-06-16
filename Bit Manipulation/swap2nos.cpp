#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number ";
    cin>>a;
    cout<<"enter second number ";
    cin>>b;
    //swaping using xor
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<"first number "<<a<<endl;
    cout<<"second number "<< b;
    return 0;
}