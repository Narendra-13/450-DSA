class Solution
{
    public:
    Node *copyList(Node *head)
    {
        Node *cur;
        for(cur = head ; cur != NULL; ){
            Node *nxt = cur->next;
            cur->next = new Node(cur->data);
            cur->next->next = nxt;
            cur = cur->next->next;
        }
        for(cur = head; cur != NULL; cur = cur->next->next){
            cur->next->arb = (cur->arb != NULL)?cur->arb->next:NULL;
        }
        Node *original = head, *copy = head->next;
        Node *temp = copy;
        while (original && copy)
        {
            original->next = (original->next) ? original->next->next : original->next;
            copy->next = (copy->next) ? copy->next->next : copy->next;
            original = original->next;
            copy = copy->next;
        }
        return temp;
    }
};
