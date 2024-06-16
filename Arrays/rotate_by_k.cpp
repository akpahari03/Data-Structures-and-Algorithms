#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    //Optimal Approach
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;

    //Brute Force
    // k=k%n;
    // int temp[k];
    // for(int i=0;i<k;i++)
    // {
    //     temp[i]=arr[i];
    // }
    // for(int i=k;i<n;i++)
    // {
    //     arr[i-k]=arr[i];
    // }
    // int j=0;
    // for(int i=n-k;i<n;i++)
    // {
    //     arr[i]=temp[j]; //or in place of j=i-(n-k)
    //     j++;
    // }
    // return arr;
}
int main()
{
    

}