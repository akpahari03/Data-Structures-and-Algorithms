#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[][3],int target,int i,int j)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;i<3;j++)
        {
            if(target==arr[i][j]) return true;
        }
    }
    return false;
}
int main()
{
    int arr1[2][2]={{1,2},{3,4}}; // initialsing 
    // int r;
    // int c;
    // cout<<"Enter number of rows ";
    // cin>>r;
    int arr[3][3];
    cout<<"Enter the numbers "<<endl;
    //taking input row wise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    //taking input column wise
    // for(int i=0;i<c;i++)
    // {
    //     for(int j=0;j<r;j++)
    //     {
    //         cin>>arr[j][i];
    //     }
    // }

    //printing
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the element to search ";
    cin>>target;
    if(linearSearch(arr,target,3,3))
    {
        cout<<"Element Found ";
    }
    else
    {
        cout<<"Element Not Found ";
    }

    return 0;
}