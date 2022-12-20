class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        /*unordered_map<Node* ,int> mp;
        while(head != NULL){
            mp[head]++;
            if(mp[head] > 1){
                return head->data;
            }
            head = head->next;
        }
        return -1;*/
        Node *p=head, *q=head;
        int c=0;
        while(q != NULL && q->next != NULL){
            p=p->next;
            q=q->next->next;
            if(p==q){
                c=1;
                break;
            }
        }
        if(c==1){
            p=head;
            while(p!=q){
                p=p->next;
                q=q->next;
            }
            return p->data;
        }
        return -1;
    }
};
