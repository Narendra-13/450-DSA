class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node *cur = head;
        int zeros=0, ones=0, twos =0;
        while(cur != NULL){
            if(cur->data == 0)
                zeros++;
            else if(cur->data == 1)
                ones++;
            else
                twos++;
            cur = cur->next;
        }
        cur = head;
        for(int i=0; i<zeros; i++){
            cur->data = 0;
            cur = cur->next;
        }
        for(int i=0; i<ones; i++){
            cur->data = 1;
            cur = cur->next;
        }
        for(int i=0; i<twos; i++){
            cur->data = 2;
            cur = cur->next;
        }
        return head;
        
    }
};
