#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Differnce between character array and string
    string s;
    char ch[20]="Ayush";
    ch[2]='\0';
    cout<<ch<<endl;
    // s="Ay\0ush"; - this will print Ay only just like the character array
    s="Ayush";
    s[2]='\0';
    cout<<s<< endl;
    cout<<"Length "<<s.length();
    return 0;
}