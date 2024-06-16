#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    int ans;
    cout << "Enter the number a and b";
    cin>>a>>b;
    cout <<"Enter the operand";
    cin>>op;
    switch(op)
    {
        case '+' : ans=a+b;
        break;
        case '-' : ans=a-b;
        break;
        case '*' : ans=a*b;
        break;
        case '/' : 
        if(b!=0)
        ans=a/b; 
        break;
        default : cout << "Invalid ";
    }
    cout << "ans is" << ans;
}