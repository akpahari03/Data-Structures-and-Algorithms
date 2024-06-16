#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node* convert(vector<int> &arr) {
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++) {
        Node* temp=new Node(arr[i]);
        temp->prev=prev;
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* &head) {
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* insertBeforeHead(Node* &head,int value) {
    if(head==NULL) {
        Node* newHead=new Node(value);
        head=newHead;
        return head;
    }
    Node* newHead=new Node(value);
    newHead->prev=NULL;
    newHead->next=head;
    head=newHead;
    return head;
}
Node* insertBeforeTail(Node* &head,int value) {
    if(head==NULL) {
        Node* newHead=new Node(value);
        head=newHead;
        return head;
    }
    if(head->next==NULL){
        Node* newHead=new Node(value);
        newHead->next=head;
        head=newHead;
        return head;
    }
    Node* tail=head;
    while(tail->next!=NULL) {
        tail=tail->next;
    }
    Node* back=tail->prev;
    Node* temp=new Node(value);
    back->next=temp;
    temp->prev=back;
    temp->next=tail;
    tail->prev=temp;
    return head;
}
void insertAtNode(Node* &node,int value) {
    Node* back=node->prev;
    Node* newNode= new Node(value);
    newNode->prev=back;
    newNode->next=node;
    back->next=newNode;
    node->prev=newNode;
}
int main()
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    Node* head=convert(arr);
    print(head);
    head=insertBeforeHead(head,51);
    print(head);
    head=insertBeforeTail(head,40);
    print(head);
    insertAtNode(head->next->next,4);
    print(head);
    return 0;
}