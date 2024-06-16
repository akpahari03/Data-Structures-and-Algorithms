#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(88);
    l.emplace_front(3232);
    for(auto it:l)
    {
        cout << it << " ";
    }
}