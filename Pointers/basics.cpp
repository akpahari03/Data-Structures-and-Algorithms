#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int *ptr=&n;
    cout<<"Value at pointer of ptr is "<<*ptr<<endl;
    cout<<"Address at pointer of ptr is "<<ptr<<endl;
    (*ptr)++; //increment the value of n by 1
    cout<<"Value at pointer of ptr is "<<*ptr<<endl;
    int *q=ptr; //copy one pointer to another
    cout<<ptr<<" "<<q<<endl;
    cout<<*ptr<<" "<<*q<<endl;
    ptr++;
    cout<<ptr;
    return 0;
}