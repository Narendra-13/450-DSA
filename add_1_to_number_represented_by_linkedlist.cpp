class Solution
{
    Node *oneplus(Node *head){
        if(head->next == NULL){
            head->data += 1;
            return head;
        }
        else{
            Node *temp = oneplus(head->next);
            if(temp->data >= 10){
                temp->data = 0;
                head->data++;
            }
            return head;
        }
    }
    public:
    Node* addOne(Node *head) 
    {
        
        return oneplus(head);
        
        // Node *cur = head;
        // if(head == NULL)
        //     return head;
        // while(cur->next != NULL)
        //     cur = cur->next;
        // cur->data += 1;
        // return head;
    }
};
