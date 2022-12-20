class Solution
{
    public:
    
    bool detectLoop(Node* head)
    {
        unordered_map<Node* ,int> mp;
        while(head!=NULL){
            mp[head]++;
            if(mp[head] >1){
                return true;
                break;
            }
            head = head->next;
        }
        return false;
    }
};
