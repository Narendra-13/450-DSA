int countTriplets(struct Node* head, int x) 
{ 
    int count = 0;
    Node* cur=head;
    unordered_map<int,int>mp;
    while(cur)
    {
        Node* res=cur->next;
        while(res)
        {
            if(mp[x-cur->data-res->data])
            {
                count+=mp[x-cur->data-res->data];
            }
            res=res->next;
        }
        mp[cur->data]++;
        cur=cur->next;
    }
    return count;
}
