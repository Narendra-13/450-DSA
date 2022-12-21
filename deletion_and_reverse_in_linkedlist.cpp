void deleteNode(struct Node **head, int key)
{
    if((*head)->data == key)
        return ;
    Node *cur = *head;
    while(cur->next != *head){
        if(cur->next->data == key && cur->next->next != *head){
            Node *temp = cur->next;
            cur->next = cur->next->next;
            delete(temp);
            return ;
        }
        cur = cur->next;
    }
    if(cur->data == key)
        return ;

}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    Node *last = *head_ref;
    while(last->next != *head_ref){
        last = last->next;
    }
    Node *cur = *head_ref;
    Node *temp;
    temp = cur->next;
    cur->next = last;
    last = cur;
    cur = temp;
    while(cur != *head_ref){
        temp = cur->next;
        cur->next = last;
        last = cur;
        cur = temp;
    }
    *head_ref = last;
// Your code goes here

}
