void insertAtTail(node* &head,node* &tail,int val){
    node* new_node = new node(val);

    if(head==NULL){
        head=new_node;
        tail=new_node;
        return;
    }

    tail->next=new_node;
    tail=new_node;
}

node* quickSort(node* head) {
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }

    node* pivot = new node(head->data);
    node* lefthead =NULL;
    node* lefttail =NULL;
    node* righthead =NULL;
    node* righttail = NULL;
    node* walk = head->next;
    while(walk!=NULL){
        if(walk->data<pivot->data){
            insertAtTail(lefthead,lefttail,walk->data);
        }else{
            insertAtTail(righthead,righttail,walk->data);
        }

        walk = walk->next;
    }
    lefthead = quickSort(lefthead);
    righthead = quickSort(righthead);

    walk = lefthead;    
    if(walk!=NULL){
        while(walk->next!=NULL){
            walk = walk->next;
        }
    }
    
    if(walk==NULL){
        pivot->next = righthead;
        return pivot;
    }

    walk->next =pivot;
    pivot->next = righthead;
    return lefthead;
}

void quickSort(struct node **headRef) {
    *headRef = quickSort(*headRef); 
}
