#include<bits/stdc++.h>
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    unordered_map <Node *, int> mp;
    if(head == NULL)
        return 1;
    Node *cur = head;
    while(cur != NULL){
        mp[cur]++;
        if(mp[cur] > 1){
            return (cur==head)?1:0;
        }
        cur = cur->next;
    }
    return 0;
}
