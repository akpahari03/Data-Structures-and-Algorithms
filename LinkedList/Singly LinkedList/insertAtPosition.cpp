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
    return 0;
}