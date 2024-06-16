#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int size,int num) {
    if(size==0) return false;
    if(arr[0]==num) return true;
    else linearSearch(arr+1,size-1,num);
}
int main()
{
    int arr[6]={2,4,5,6,101,99};
    int size=6;
    int num;
    cout<<"Enter number to be searched ";
    cin>>num;
    if(linearSearch(arr,size,num)) {
        cout<<"Element Found ";
    } else {
        cout<<"Element Not Found";
    }
    return 0;
}