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
bool search(Node* &head,int n) {
    Node* temp=head;
    while(temp) {
        if(temp->data==n) return true;
        temp=temp->next;
    }
    return false;
}
int main()
{
    vector<int> arr={2,5,7,99,90,22,22,88,0,13};
    Node* head=convert(arr);
    print(head);
    int n;
    cout<<"Enter the number to search ";
    cin>>n;
    if(search(head,n)) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}