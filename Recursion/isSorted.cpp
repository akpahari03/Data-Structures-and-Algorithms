#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size) {
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;
    else isSorted(arr+1,size-1);
}
int main()
{
    int arr[6]={2,4,5,6,101,99};
    if(isSorted(arr,6)) {
        cout<<"Array is sorted";
    } else {
        cout<<"Array is not sorted";
    }
    return 0;
}