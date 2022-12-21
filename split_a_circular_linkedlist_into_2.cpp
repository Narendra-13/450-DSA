void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node* slow = head;
    Node* fast = head;
    while(fast->next != head && fast->next->next != head){
        fast = fast->next->next;
        slow = slow->next;
    }
    Node* temp = slow->next;
    slow->next = head;
    *head1_ref = head;
    *head2_ref = temp;
    if(fast->next->next == head){
        fast = fast->next;
    }
    fast->next = temp;
}
