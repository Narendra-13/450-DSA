class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_map<int, int> mp;
        Node *cur = head;
        while(cur != NULL){
            mp[cur->data] = 1;
            if((cur->next != NULL) && mp[cur->next->data] ==1){
                Node *temp = cur->next;
                cur->next = temp->next;
                delete(temp);
            }else{
                cur = cur->next;
            }
        }
        return head;
    }
};
