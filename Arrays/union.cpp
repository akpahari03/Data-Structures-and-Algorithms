#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    int size = s.size();
    vector<int> u;
    for (auto it : s)
    {
        u.push_back(it);
    }
    return u;
}

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();
    int m=b.size();
    vector<int> u;
    int i=0;int j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            if(u.size()==0 || u.back()!=a[i])
            {
                u.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(u.size()==0  || u.back()!=b[j])
            {
                u.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n)
    {
        if(u.size()==0 || u.back()!=a[i])
        {
            u.push_back(a[i]);
        }
        i++;
    }
    while(j<m)
    {
        if(u.size()==0 || u.back()!=b[j])
        {
            u.push_back(b[j]);
        }
        j++;
    }
    return u;
}

int main()
{
    return 0;
}