#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int i,int n) {
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]) {
        swap(arr[j-1],arr[j]);
        j--;
    }
    insertionSort(arr,i+1,n);
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
    insertionSort(arr,0,n);
    print(arr,n);
    return 0;
}