#include<bits/stdc++.h>
using namespace std;
int main()
{
    //map - stores data in {key,value}
    //stores unique key in sorted order
    map<int,int> mpp;
    map<int,pair<int,int>> m2;
    map<pair<int,int>,int> m3;
    mpp[1]=4;
    mpp.insert({4,9});
    mpp.emplace(2,8);
    for(auto it:mpp)
    {
        cout << it.first<<" "<<it.second<<endl;

    }

    //multimap - key can be duplicate but in sorted manner
    //unorderd_map - key is unique but not stored in sorted manner

}