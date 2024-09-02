#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> maxheap; //for max heap
    maxheap.push(50);
    maxheap.push(2);
    maxheap.push(56);
    maxheap.push(520);
    maxheap.push(98);

    cout<<"Element on top of max heap "<<maxheap.top();
    cout<<endl;
    maxheap.pop();
    cout<<"Element on top of max heap "<<maxheap.top();
    cout<<endl;
    cout<<"Size of max heap "<<maxheap.size();
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(50);
    minheap.push(2);
    minheap.push(56);
    minheap.push(520);
    minheap.push(98);

    cout<<"Element on top of max heap "<<minheap.top();
    cout<<endl;
    minheap.pop();
    cout<<"Element on top of max heap "<<minheap.top();
    cout<<endl;
    cout<<"Size of max heap "<<minheap.size();
    cout<<endl;
    if(minheap.empty()) cout<<"Heap is empty"<<endl;
    else cout<<"Heap is not empty"<<endl;

    return 0;
}