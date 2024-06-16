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
Node* removeDupicateSortedArray(Node* &head) {
    if(head==NULL) return NULL;
    Node* curr=head;
    while(curr!=NULL) {
        if((curr->next!=NULL) && curr->data==curr->next->data) {
            Node* front=curr->next->next;
            Node* duplicate=curr->next;
            delete duplicate;
            curr->next=front;
        }
        else {
            curr=curr->next;
        }
    }
    return head;
}
int main()
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    sort(arr.begin(),arr.end());
    Node* head=convert(arr);
    print(head);
    head=removeDupicateSortedArray(head);
    print(head);
    return 0;
}