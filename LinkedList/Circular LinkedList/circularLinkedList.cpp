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
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free with data "<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int d) {
    //empty list
    if(tail==NULL){
        Node *newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;
    } else {
        //non-empty list
        //assuming that the element is present in the list
        Node *curr=tail;
        while(curr->data!=element) {
            curr=curr->next;
        }
        //element found
        Node *newNode = new Node(d);
        newNode->next=curr->next;
        curr->next=newNode;
    }
}
void print(Node* &tail) {
    Node *temp=tail;
    //empty list
    if(tail==NULL) {
        cout<<"List is empty"<<endl;
        return;
    } else {
        do{
            cout<<tail->data<<" ";
            tail=tail->next;
        } while(tail!=temp);
        cout<<endl;
    }
}
void deleteNode(Node* &tail,int value) {
    //empty List
    if(tail==NULL) {
        cout<<"List is empty "<<endl;
        return;
    } else {
        //non-empty
        //assuming that "value" is present in the Linked List
        Node *prev=tail;
        Node *curr=tail->next;

        while(curr->data!=value) {
            prev=curr;
            curr=curr->next;     
        }
        prev->next=curr->next;
        //1 Node Linked List
        if(curr==prev) {
            tail=NULL;
        } 
        //>=2 Node Linked List
        else if(tail==curr) {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    Node *tail=NULL;
    print(tail);
    insertNode(tail,2,4);
    print(tail);
    insertNode(tail,4,8);
    print(tail);
    insertNode(tail,8,90);
    print(tail);
    insertNode(tail,8,0);
    print(tail);
    insertNode(tail,4,55);
    print(tail);
    deleteNode(tail,90);
    print(tail);
    return 0;
}