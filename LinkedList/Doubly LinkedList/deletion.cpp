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
Node* deleteHead(Node* &head) {
    if(head==NULL || head->next==NULL) return NULL;
    else {
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    return head;
}
Node* deleteTail(Node* &head) {
    if(head==NULL || head->next==NULL) return NULL;
    Node* tail=head;
    while(tail->next!=NULL) {
        tail=tail->next;
    }
    Node* newTail=tail->prev;
    newTail->next=NULL;
    tail->prev=NULL;
    delete tail;
    return head;
}
Node* deletePos(Node* &head,int position) {
    if(head==NULL) return head;
    int count=0;
    Node* temp=head;
    while(temp!=NULL) {
        count++;
        if(count==position) break;
        temp=temp->next;
    }
    Node* back=temp->prev;
    Node* front=temp->next;
    if(back==NULL && front==NULL) return NULL;
    else if(back==NULL) return deleteHead(head);
    else if(front==NULL) return deleteTail(head);
    else {
        back->next=front;
        front->prev=back;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    return head;
}
Node* deleteValue(Node* head,int value) {
    if(head==NULL) return head;
    int count=0;
    Node* temp=head;
    while(temp->next!=NULL) {
        count++;
        if(temp->data==value) break;
        temp=temp->next;
    }
    Node* back=temp->prev;
    Node* front=temp->next;
    if(back==NULL && front==NULL) return NULL;
    else if(back==NULL) return deleteHead(head);
    else if(front==NULL) return deleteTail(head);
    else {
        back->next=front;
        front->prev=back;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    return head;
}
void deleteANode(Node *temp) {
    Node* back=temp->prev;
    Node* front=temp->next;
    if(front==NULL) {
        back->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;
    }   
    back->next=front;
    front->prev=back;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    return;


}
int main()
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    Node* head=convert(arr);
    print(head);
    deleteHead(head);
    print(head);
    deleteTail(head);
    print(head);
    deletePos(head,1);
    print(head);
    deletePos(head,7);
    print(head);
    deleteANode(head->next->next);
    print(head);
    return 0;
}