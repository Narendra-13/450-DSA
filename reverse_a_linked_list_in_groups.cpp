class Solution
{
    
    public:
    
    struct node *reverse (struct node *head, int k)
    { 
        node* prev=NULL;
        node* cur=head;
        node* next;
        
        int count=0;
        
        while(cur!=NULL && count<k){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            count++;
        }
        
        if(next!=NULL){
        head->next=reverse(next,k);
        }
        
        return prev;
    }
};
