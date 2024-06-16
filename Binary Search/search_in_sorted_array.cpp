#include<iostream>
using namespace std;
int getPivot(int arr[],int size)
{
    int s =0;
    int e =size-1;
    int mid;
    while(s<e)
    {
        mid = s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}   
int binarySearch(int arr[],int start,int end, int key)
{
    int mid;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}
int search(int arr[],int n,int key)
{
    int pivot = getPivot(arr,n);
    if(arr[pivot]<=key<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,key);
    }
    else 
    {
        return binarySearch(arr,0,pivot-1,key);
    }

}
int main()
{
    int arr[5]={4,5,1,2,3};
    cout << search(arr,5,2);
}