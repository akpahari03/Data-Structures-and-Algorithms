#include<bits/stdc++.h>
using namespace std;
char getMaxOccurance(string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>maxi)
        {
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;

}
int main()
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    cout<<getMaxOccurance(s);

    return 0;
}