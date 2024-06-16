#include<bits/stdc++.h>
using namespace std;
void print(int *p) {
    cout<<*p<<endl;
    cout<<p<<endl;
}
void update(int *p) {
    // p=p+1;
    // cout<<"inside "<<p<<endl;
    *p=*p+1;
}
int getSum(int *arr,int n) {
    cout<<"Size of array "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int value=9;
    int *p=&value;
    print(p); 
    cout<<"Before "<<p<<endl;
    cout<<"Value before "<<*p<<endl;
    update(p);
    cout<<"After "<<p<<endl;   
    cout<<"Value after "<<*p<<endl;

    int arr[8]={1,2,3,4,5,6,7,8};
    cout<<"Sum is "<<getSum(arr+2,6)<<endl;
    return 0;
}