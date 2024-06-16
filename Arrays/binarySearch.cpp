#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key)
{
    int start =0;
    int end = size -1;
    while(start<=end)
    {
        // int mid = (start + end ) / 2;
        int mid = start + (end-start)/2;
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
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {2,5,7,8,16,27};
    int odd[5] = {1,7,8,44,57};
    int ans = binarySearch(odd,6,16);
    cout << odd[ans] << "ans" << ans ;
    ans = binarySearch(even,6,16);
    cout << even[ans] << "ans" << ans ;


}