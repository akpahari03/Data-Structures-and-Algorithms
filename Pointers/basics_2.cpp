#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={2,4,9,88};
    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<"Address of first memory block is "<<&arr[0]<<endl;
    cout<<"*arr -> "<<*arr<<endl;
    cout<<"*arr+1 -> "<<*arr+1<<endl;
    cout<<"*(arr+1) -> "<<*(arr+1)<<endl;
    cout<<"*(arr)+1 -> "<<*(arr)+1<<endl;
    cout<<"*(arr+2) -> "<<*(arr+2)<<endl;
    cout<<"2[arr] -> "<<2[arr]<<endl;
    return 0;
}