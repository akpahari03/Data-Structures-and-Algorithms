#include<bits/stdc++.h>
using namespace std;
char lowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}
int getLength(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!=0;i++)
    {
        count++;
    }
    return count;
}
bool check(char ch[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(lowerCase(ch[i])!=lowerCase(ch[j])) return false;
        else {
            i++;
            j--;
        }
    }
    return true;
    
}
int main()
{
    char ch[20];
    cout<<"Enter your name ";
    cin>>ch;
    int n=getLength(ch);
    if(check(ch,n))
    {
        cout<<"Your name is palidrome";
    }
    else{
        cout<<"Your name is not palidrome";
    }
    return 0;
}