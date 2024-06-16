#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set - sorted and unique
    //o(logn) - time complexity
    set<int> s;
    s.insert(50);
    s.emplace(24);
    s.insert(245);
    s.insert(8);
    auto it=s.find(50);
    cout<<*(it)<<endl;
    int cnt1=s.count(24);
    int cnt2=s.count(2224);
    cout <<cnt1 << endl;
    cout <<cnt2 << endl;
    s.erase(50);


    for(auto it:s)
    {
        cout << it << " ";
    }

    auto it=s.lower_bound(2);
    auto it=s.upper_bound(50);

    //in unordered set the set is not sorted but unique
    //lower bound and upper bound doesnt work
    //time complexity - o(n)
}