#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int start,int end,int num) {
    if(start>end) return false;
    int mid=start+(end-start)/2;
    if(arr[mid]==num) return true;
    if(num>arr[mid]) {
        binarySearch(arr,mid+1,end,num);
    } else {
        binarySearch(arr,start,mid-1,num);
    }
}
int main()
{
    int arr[6]={2,4,5,6,90,99};
    int size=6;
    int num;
    cout<<"Enter number to be searched ";
    cin>>num;
    if(binarySearch(arr,0,size,num)) {
        cout<<"Element Found ";
    } else {
        cout<<"Element Not Found";
    }
    
    return 0;
}