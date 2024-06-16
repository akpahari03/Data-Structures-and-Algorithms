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
Node* sort012(Node* &head) {
    if(head==NULL || head->next==NULL) return head;
    Node* zeroHead=new Node(-1);
    Node* oneHead=new Node(-1);
    Node* twoHead=new Node(-1);

    Node* zeroTail=zeroHead;
    Node* oneTail=oneHead;
    Node* twoTail=twoHead;
    Node* temp=head;
    while(temp!=NULL) {
        if(temp->data==0) {
            zeroTail->next=temp;
            zeroTail=zeroTail->next;
        } else if(temp->data==1) {
            oneTail->next=temp;
            oneTail=oneTail->next;
        } else {
            twoTail->next=temp;
            twoTail=twoTail->next;
        }
        temp=temp->next;
    }
    zeroTail->next=(oneHead->next)?(oneHead->next):(twoHead->next);
    oneTail->next=twoHead->next;
    twoTail->next=NULL;
    Node* newHead=zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;

}
int main()
{
    vector<int> arr={2,1,0,2,2,1,1,0,0,1,2,1,2};
    Node* head=convert(arr);
    print(head);
    head=sort012(head);
    print(head);
    return 0;
}