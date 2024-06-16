#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2)  {
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //they are same
    if(p1.first>p2.first) return true;
    return false;

}
int main()
{
    int a1[]={2,4,6};
    int n=3;
    //to sort array
    // sort(a1,a1+n);
    // sort(a1+1,a1+3);
    // sort(a1,a1+n,greater<int>); // sort in desending order

    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    // sort it according to second elem
    // if second elem is same then sort it according to first elem but descending
    sort(a,a+n,comp);

    int num=7;
    int cnt=__builtin_popcount();

    long long num=242432424242;
    int cnt=__builtin_popcountll();

    string s="123";
    sort(s.begin(),s.end());
    do {
        cout << s<<endl;

    } while(next_permutation(s.begin(),s.end()));
    
    int maxi = *max_element(a,a+n);

    
    }
