#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    bool swapped = false; //for optimising the code
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false) 
        {
            //already sorted
            break;  
        } 
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
    bubbleSort(arr,n);
    print(arr,n);
}
