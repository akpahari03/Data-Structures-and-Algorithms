#include<bits/stdc++.h>
using namespace std;
string reverseString(string &str,int i,int j) {
    if(i>j) return str;
    swap(str[i],str[j]);
    return reverseString(str,i+1,j-1);
}
int main()
{
    string str="abcde";
    cout<<"Before reverse-> "<<str<<endl; 
    cout<<"After reverse-> "<<reverseString(str,0,str.length()-1); 
    return 0;
}