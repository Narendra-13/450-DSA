int length(Node* head1){
    if(head1==NULL){
        return 0;
    }
    int count=0;
    while(head1){
        head1=head1->next;
        count++;
    }
    return count;
}

int intersectPoint(Node* head1, Node* head2){
    int l1=length(head1);
    int l2=length(head2);
    Node* ptr1;
    Node* ptr2;
    int d=0;
    if(l1>l2){
        ptr1=head1;
        ptr2=head2;
        d=l1-l2;
    }else{
     ptr2=head1;
     ptr1=head2;
     d=l2-l1;
    }
    while(d--){
        if(ptr1==NULL){
            return -1;
        }
        ptr1=ptr1->next;
    }

    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
     return -1;
}
