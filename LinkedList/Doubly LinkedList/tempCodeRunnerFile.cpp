back==NULL && front==NULL) return NULL;
    else if(back==NULL) return deleteHead(head);
    else if(front==NULL) return deleteTail(head);
    else {
        back->next=front;
        front->prev=back;
        temp->next=NULL;
        temp->prev=NULL;
    }