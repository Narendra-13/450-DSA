Node *removeDuplicates(Node *head)
{
    Node *cur = head;
    while(cur!=NULL){
        if((cur->next != NULL) && (cur->data == cur->next->data)){
            Node *temp = cur->next;
            cur->next = cur->next->next;
            delete(temp);
        }else{
            cur = cur->next;
        }
    }
    return head;
}
