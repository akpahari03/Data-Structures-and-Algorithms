#include<bits/stdc++.h>
using namespace std;
int main()
{
    //max heap
    priority_queue<int> pq;
    pq.push(2);
    pq.push(43);
    pq.push(65);
    pq.push(8);
    pq.push(10);
    cout << pq.top()<<endl; //65
    pq.pop();
    cout << pq.top()<<endl; //43

    //min heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(2);
    pq2.push(43);
    pq2.push(65);
    pq2.push(8);
    pq2.push(10);
    cout << pq2.top()<<endl; //2
    pq2.pop();
    cout << pq2.top()<<endl; //8
}