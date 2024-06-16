#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p =  {3,4};
    cout << p.first << " ";
    cout << p.second << endl;
    pair<int,pair<int,int>> p2 ={2,{4,9}};
    cout << p2.first << " ";
    cout << p2.second.first << " ";
    cout << p2.second.second << endl;
    pair <int,int> arr[3] = {{2,3},{6,8},{44,98}};
    cout << arr[1].first << " ";
    cout << arr[1].second;
}