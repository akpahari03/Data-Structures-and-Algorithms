#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector are dynamic in nature
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector <int> v2(5,100);
    vector <int> v3(5);

    vector<int> v4(v2);

    vector<int>::iterator it=v.begin();
    it++;
    cout <<*(it) << " ";
    vector<int>::iterator it=v.end();
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*(it)<< " ";
    }
    for(auto it:v)
    {
        cout <<it<<" ";
    }
    v.erase(v.begin()+1);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);
    v.pop_back();
}