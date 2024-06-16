#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

int firstOcc(int arr[],int size,int key)
{
    int ans=-1;
    int start =0;
    int end = size-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(key == arr[mid])
        {
            ans = mid;
            end = mid-1;
        }
        else if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size,int key)
{
    int ans=-1;
    int start =0;
    int end = size-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(key == arr[mid])
        {
            ans = mid;
            start = mid +1;
        }
        else if(key > arr[mid])
        {
            start = mid+1;
        }
        else 
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[10]={33,56,3,11,77,77,8,4,1,77};
    int size=10;
    int key = 77;
    sort(arr,arr+size);
    printArray(arr,size);
    cout << endl;
    cout << "First Occ is at index  " <<  firstOcc(arr,size,key) << endl;
    cout << "Last Occ is at index " <<  lastOcc(arr,size,key) << endl;

}