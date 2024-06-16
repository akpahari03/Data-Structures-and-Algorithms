#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int m,int arr2[],int n,int arr3[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        arr3[k]=arr1[i];
            i++;
            k++;
    }
    while(j<n)
    {
        arr3[k]=arr2[j];
            j++;
            k++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[5]={2,4,5,7,9};
    int arr2[4]={1,4,6,7};
    int arr3[9]={};
    merge(arr1,5,arr2,4,arr3);
    printArray(arr3,9);
    return 0;
}