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
//using hashmap
bool detectLoop(Node* &head) {
    if(head==NULL) return false;
    map<Node*,bool> visited;
    Node* temp=head;
    while(temp!=NULL) {
        if(visited[temp]==true) return true;
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
//Flyod's Cycle Detection
bool detectLoop2(Node* &head) {
    if(head==NULL) return false;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL) {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}
Node* staringOfLoop(Node* &head) {
    if(head==NULL) return NULL;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL) {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) {
            slow=head;
            while(slow!=fast) {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;    
}
Node* removeLoop(Node* &head) {
    if(head==NULL) return NULL;
    Node* start=staringOfLoop(head);
    if(start==NULL) return head;
    Node* temp=head;
    while(temp->next!=start) {
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
int main()
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    Node* head=convert(arr);
    print(head);
    Node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=head->next;
    if(detectLoop2(head)) cout<<"Loop Detected";
    else cout<<"Loop Not Detected";
    cout<<endl;
    Node* start=staringOfLoop(head);
    cout<<"Start of the loop is "<<start->data;
    head=removeLoop(head);
    print(head);
    return 0;
}