#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows ";
    cin>>r;
    cout<<"Enter number of columns ";
    cin>>c;
    //creating 2D array
    int **arr=new int*[r];
    for(int i=0;i<r;i++) {
        arr[i]=new int[c];
    }
    //taking input
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
    for(int i=0;i<r;i++) {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}