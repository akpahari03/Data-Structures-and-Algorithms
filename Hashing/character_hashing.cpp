#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string"<<endl;
    cin>>s;

    //pre compute
    //26 size is only when there is only lower case otherwise if both then the size will be 256
    // int hash[26] = {0};
    // for(int i=0;i<s.size();i++)
    // {
    //     hash[s[i]-'a']++;
    // }
    int hash[256] = {0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    int q;
    cout <<"Enter the number of queries"<<endl;
    cin>>q;
    cout<<"Enter the queries"<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        //fetching
        // cout<<hash[c-'a']<<endl; for only lower case are present
        cout<<hash[c]<<endl;
    }
    return 0;
}