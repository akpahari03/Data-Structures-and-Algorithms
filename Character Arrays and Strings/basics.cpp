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
int main()
{
    char ch[20];
    cout<<"Enter your name ";
    cin>>ch;
    // ch[2]='\0';
    cout<<"Your name is "<<ch<<endl;
    cout<<"Length of the name is "<<getLength(ch);
    return 0;
}