#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout <<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout << "Enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //precompute
    int hash[13] ={0}; //hashing size can be upto 10power7
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }


    cout <<"Enter the number of queries"<<endl;
    int q;
    cin>>q;
    cout<<"Enter the queries"<<endl;
    int number;
    while(q--)
    {
        cin>>number;
        //fetching
        cout << hash[number]<<endl;
    }
    return 0;
}