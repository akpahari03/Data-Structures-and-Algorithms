#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data=data;
        this->next=NULL;
    }
    ~Node() {
        int value=this->data;
        if(this->next!=NULL) {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void print(Node* &head) {
    Node *temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int d) {
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d) {
    Node *temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertAtPosition(Node* &head,Node * &tail,int position,int d) {
    //inserting at first position
    if(position==1) {
        insertAtHead(head,d);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<position-1) {
        temp=temp->next;
        count++;
    }
    //inserting at last position
    if(temp->next==NULL) {
        insertAtTail(tail,d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(Node* &head,int position) {
    if(position==1) {
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    } else {
        Node *curr=head;
        Node *prev=NULL;
        int count=1;
        while(count<position) {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    Node *node1=new Node(10);
    Node *tail=node1;
    Node *head=node1;
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    print(head);
    insertAtPosition(head,tail,4,17);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deleteNode(head,1);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}