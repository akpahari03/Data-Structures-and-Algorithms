#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head) {
    Node* temp=head;
    while(temp) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* convert(vector<int> arr) {
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++) {
        Node *temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* insertAtHead(Node* &head,int value) {
    Node* temp= new Node(value);
    temp->next=head;
    head=temp;
    return head;
}
Node* insertAtTail(Node* &head,int value) {
    if(head==NULL) {
        Node* newNode = new Node(value);
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node* temp= head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    Node* newNode=new Node(value);
    temp->next=newNode;
    return head;
}
Node* insertAtPos(Node* &head,int position,int value) {
    if(head==NULL) {
        if(position==1) {
            Node* newNode=new Node(value);
            newNode-> next=head;
            head=newNode;
            return head;
        } else return head;
    }
    if(position==1) {
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        if(count==(position-1)) {
            Node* newNode=new Node(value);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insertBeforeValue(Node* &head,int element,int value) {
    if(head==NULL) return head;
    if(head->data==value) {
        Node* newNode= new Node(element);
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node* temp=head;
    while(temp->next!=NULL) {
        if(temp->next->data==value) {
            Node* newNode=new Node(element);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main() 
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    Node* head=convert(arr);
    print(head);
    insertAtHead(head,100);
    print(head);
    insertAtTail(head,912);
    print(head);
    insertAtPos(head,4,70);
    print(head);
    insertBeforeValue(head,4,90);
    print(head);
    return 0;
}