#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) {
        this->data=data;
        this->prev=NULL;
        this->next+NULL;
    }
    ~Node() {
        int value=this->data;
        if(next!=NULL) {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free with data "<<value<<endl;
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
int getLength(Node* &head) {
    Node *temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}
void insertAtHead(Node* &head,Node* &tail,int d) {
    if(head==NULL) {
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    } else {
        Node *temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insertAtTail(Node* &head,Node* &tail,int d) {
    if(tail==NULL) {
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    } else {
        Node *temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d) {
    if(position==1) {
        insertAtHead(head,tail,d);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<position-1) {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL) {
        insertAtTail(head,tail,d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(Node* &head,int position) {
    if(position==1) {
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    // Node *node1=new Node(20);
    Node *head=NULL;
    Node *tail=NULL;
    // print(head);
    insertAtHead(head,tail,30); 
    print(head);
    insertAtTail(head,tail,40);
    print(head);
    insertAtPosition(head,tail,1,90);
    print(head);
    insertAtPosition(head,tail,4,870);
    print(head);
    cout<<"Length : "<<getLength(head)<<endl;
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    deleteNode(head,3);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    return 0;
}