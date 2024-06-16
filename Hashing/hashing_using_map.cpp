#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //pre compute
    // map<int,int> mpp; 
    unordered_map<int,int> mpp; //unordered map can also be used ( not sorted )
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    //iterate over the map
    for(auto it:mpp)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;
    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    cout<<"Enter the queries"<<endl;
    while(q--)
    {
        int number;
        cin>>number;
        //fetching
        cout<<mpp[number]<<endl;
    }
    return 0;
}