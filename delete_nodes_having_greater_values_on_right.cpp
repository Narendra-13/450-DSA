class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node *cur = head;
        if(cur == NULL || cur->next == NULL)
            return cur;
        Node *temp;
        while(cur == head && cur->next != NULL){
            temp = cur;
            cur = cur->next;
            if(temp->data < cur->data){
                head = cur;
                delete(temp);
            }
            if(cur->next == NULL)
                return head;
        }
        cur = temp;
        Node *prev;
        while(cur->next != NULL){
            if(cur->data < cur->next->data){
                Node *temp = cur->next;
                cur->data = temp->data;
                cur->next = temp->next;
                delete(temp);
                cur = head;
            }else{
                // prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
