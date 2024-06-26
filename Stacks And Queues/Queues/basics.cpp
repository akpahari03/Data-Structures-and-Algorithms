#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(9);
    q.push(82);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    if(q.empty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;
    q.pop();
    if(q.empty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty";
    return 0;
}