#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[],int size) {
    if(size==0) return 0;
    if(size==1) return arr[0];
    return sumOfArray(arr+1,size-1)+arr[0];
}
int main()
{
    int arr[5]={1,2,3,4,90};
    int size=5;
    cout<<"Sum of array "<<sumOfArray(arr,size);
    return 0;
}