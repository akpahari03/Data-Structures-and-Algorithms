#include<bits/stdc++.h>
using namespace std;
int main()
//FIFO
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    cout << q.back()<<endl; //10
    cout << q.front()<<endl; //2
    q.pop();
    cout << q.front()<<endl; //4
}