#include<bits/stdc++.h>
using namespace std;
void func(int i,int x)
{
    if(i>x) return;
    cout<<"hello ";
    func(i+1,x);
}
int main()
{
    int x;
    cin>>x;
    func(1,x);
    return 0;
}