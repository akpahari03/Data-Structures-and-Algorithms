void MorrisTraversal(Node* root) {
    Node *curr,*pre;
    if(root==NULL) return;

    curr=root;
    while(curr!=NULL) {
        if(curr->left == NULL) {
            cout<< curr->data;
            curr=curr->right;
        }
        else {
            pre=curr->left;
            while(pre->right!=NULL && pre->right!=curr) {
                pre=pre->right;
            }
            if(pre->right == NULL) {
                pre->right=curr;
                curr=curr->left;
            }
            else {
                pre->right==NULL;
                cout<<curr->data;
                curr=curr->right;
            }
        }
    }
}