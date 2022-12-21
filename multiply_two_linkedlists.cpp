long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long x=0;
    long long y=0;
    Node *p=l1;
    Node *q=l2;
    while(p){
        x=((x*10)+p->data)%1000000007;
        p=p->next;
    }
    while(q){
        y=((y*10)+q->data)%1000000007;
        q=q->next;
    }
    long long ans= (x*y)%1000000007;
    return ans;
}
