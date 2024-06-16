#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n) {
    if(n==0 || n==1) return;
    for(int i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[9]={3,54,66,78,5,4343,56,5,222};
    int n=9;
    bubbleSort(arr,n);
    print(arr,n);
    return 0;
}