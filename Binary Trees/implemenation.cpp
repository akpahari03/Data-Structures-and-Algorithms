#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
    node* buildTree(node* root) {
        int data;
        cout<<"Enter the data"<<endl;
        cin>>data;
        root= new node(data);

        if(data==-1) {
            return NULL;
        }
        cout<<"Enter data for left of "<< data <<endl;
        root->left=buildTree(root->left);
        cout<<"Enter data for right of "<< data <<endl;
        root->right=buildTree(root->right);
        return root;
    }

    void buildFromLevelOrder(node* root) {
        queue<node*> q;
        cout<<"Enter the data for root"<<endl;
        int data;
        cin>>data;
        root= new node(data);

        while(!q.empty()) {
            node* temp=q.front();
            q.pop();

            cout<<"Enter left node for "<<temp->data<<endl;
            int leftData;
            cin>>leftData;
            if(leftData !=-1) {
                temp->left=new node(leftData);
                q.push(temp->left);
            }
            cout<<"Enter right node for "<<temp->data<<endl;
            int rightData;
            cin>>rightData;
            if(rightData!=-1) {
                temp->right = new node(rightData);
                q.push(temp->right);
            }
        }
    }

    void levelOrderTraversal(node* root) {
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()) {
            node* temp = q.front();
            q.pop();

            if(temp == NULL) { 
                //purana level complete traverse ho chuka hai
                cout << endl;
                if(!q.empty()) { 
                    //queue still has some child ndoes
                    q.push(NULL);
                }  
            }
            else{
                cout << temp -> data << " ";
                if(temp ->left) {
                    q.push(temp ->left);
                }

                if(temp ->right) {
                    q.push(temp ->right);
                }
            }
        }
    }


int main()
{
    node* root=NULL;
    //creating a tree
    root = buildTree(root);
    levelOrderTraversal(root);
    return 0;
}