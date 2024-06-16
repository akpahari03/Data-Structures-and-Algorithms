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
//brute approach TC:O(2n) SC:O(n)
Node* reverse(Node* &head) {
    if(head==NULL || head->next==NULL) return head;
    stack<int> st;
    Node* temp=head;
    while(temp!=NULL) {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL) {
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}
//optimal approach TC:O(n) SC:O(1)
Node* optimalReverse(Node* &head) {
    if(head==NULL || head->next==NULL) return head;
    Node* current=head;
    Node* back=NULL;
    while(current!=NULL) {
        back=current->prev;
        current->prev=current->next;
        current->next=back;

        current=current->prev;
    }
    return back->prev;
}
int main()
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    Node* head=convert(arr);
    print(head);
    head=optimalReverse(head);
    print(head);
    return 0;
}