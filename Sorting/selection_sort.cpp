#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
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
    sort(arr,n);
    print(arr,n);
    
}