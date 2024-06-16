#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[][3],int target,int row,int col)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            if(target==arr[row][col]) return true;
        }
    }
    return false;
}
int main()
{
    int arr[3][3];
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the target ";
    cin>>target;
    if(linearSearch(arr,target,3,3))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element Not Found";
    }
}