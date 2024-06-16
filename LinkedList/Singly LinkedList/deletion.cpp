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
void print(Node* &head) {
    Node* temp=head;
    while(temp) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* deleteHead(Node* &head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node* &head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}
Node* deletePos(Node* &head,int position) {
    if(head==NULL) return head;
    if(position==1) {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL) {
        count++;
        if(count==position) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* deleteValue(Node* &head,int value) {
    if(head==NULL) return head;
    if(head->data==value) {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL) {
        if(temp->data==value) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
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
    deletePos(head,3);
    print(head);
    deleteValue(head,88);
    print(head);
    return 0;
}