class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next==NULL)
            return head;
        struct Node *cur;
        struct Node *prev = NULL;
        while(head != NULL){
            cur  = head->next;
            head->next = prev;
            prev = head;
            head = cur;
        }
        return prev;
    }
};
