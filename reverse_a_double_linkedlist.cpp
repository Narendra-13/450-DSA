Node* reverseDLL(Node * head)
{
    if(head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *cur = head;
    Node *fut;
    while(cur != NULL){
        fut = cur->next;
        cur->next = prev;
        prev = cur;
        cur->prev = fut;
        cur = fut;
    }
    return prev;
}
