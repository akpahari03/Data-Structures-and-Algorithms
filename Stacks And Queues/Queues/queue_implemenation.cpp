#include<iostream>
using namespace std;
class Queue {
    int *arr;
    int size;
    int rear;
    int front;
    public:
    Queue(int n) {
        size=n;
        arr=new int[size];
        front=0;
        rear=0;
    }
    bool isEmpty() {
        if(front==rear) return true;
        else return false;
    }
    bool isFull() {
        if(rear==size-1) return true;
        else return false; 
    }
    void enqueue(int data) {
        if(isFull()) return;
        else {
            arr[rear]=data;
            rear++;
            return;
        }
    }
    int dequeue() {
        if(isEmpty()) return -1;
        int ans=arr[front];
        arr[front]=-1;
        front++;
        if(rear==front) rear=front=0;
        return ans;
    }
    int top() {
        if(isEmpty()) return -1;
        return arr[front];
    }
};
int main()
{
    Queue q(10);
    if(q.isEmpty()) cout<< "Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;

    q.enqueue(98);
    q.enqueue(9);
    q.enqueue(23);

    cout<<q.top()<<endl;

    if(q.isEmpty()) cout<< "Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;

    q.dequeue();
    cout<<q.top()<<endl;

    if(q.isFull()) cout<< "Queue is full"<<endl;
    else cout<<"Queue is not full"<<endl;
    return 0;
}