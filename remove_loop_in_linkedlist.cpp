#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    unordered_map<Node* ,int> mp;
    void removeLoop(Node* head)
    {
        Node *prev;
        while(head!=NULL){
            mp[head]++;
            if(mp[head] >1){
                prev->next = NULL;
                break;
            }
            prev = head;
            head = head->next;
        }
    }
};
