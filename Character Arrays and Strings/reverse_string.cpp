#include<bits/stdc++.h>
using namespace std;
int getLength(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!=0;i++)
    {
        count++;
    }
    return count;
}
void rev(char ch[],int length)
{
    int i=0;
    int j=length-1;
    while(i<j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[20];
    cout<<"Enter your name ";
    cin>>ch;
    cout<<"Your name is "<<ch<<endl;
    int length=getLength(ch);
    rev(ch,length);
    cout<<"Reverse of your name is "<<ch;
    return 0;
}