#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high) {
    int pivot=arr[low];
    int count=0;
    for(int i=low+1;i<=high;i++) {
        if(arr[i]<=pivot) count++;
    }
    int pivotIndex=low+count;
    swap(arr[low],arr[pivotIndex]);
    int i=low;
    int j=high;
    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i]<pivot) {
            i++;
        }
        while(arr[j]>pivot) {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i++],arr[j--]);
        }
    }
}
void quickSort(int arr[],int low,int high) {
    if(low>=high) return;
    int pIndex=partition(arr,low,high);
    quickSort(arr,low,pIndex-1);
    quickSort(arr,pIndex+1,high);
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
    quickSort(arr,0,n-1);
    print(arr,n);
    return 0;
}