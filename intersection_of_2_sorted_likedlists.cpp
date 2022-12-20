Node* reverseList(Node* head){
    Node* next_pointer = head;
    Node* current_pointer = NULL;   
    Node* address_setter = NULL;    

    while(next_pointer != NULL){
        address_setter = current_pointer;
        current_pointer = next_pointer;
        next_pointer = next_pointer -> next;
        current_pointer -> next = address_setter;
    } 
    return current_pointer;
}


Node* findIntersection(Node* head1, Node* head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *prev = NULL;
    Node *head;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data < temp2->data){
            temp1 = temp1->next;
        }else if(temp1-> data > temp2->data){
            temp2 = temp2->next;
        }else{
            int n = temp1->data;
            Node *crt = new Node(n);
            crt->next = prev;
            prev = crt;
            temp1 = temp1->next;
            temp2 = temp2->next;
            // head = crt;
        }
        // head = crt
    }
    return reverseList(prev);
    // return prev;
}
