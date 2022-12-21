class Solution{
  public:
    //Function to merge K sorted linked list.
    
    Node* mergesorted(Node* node1, Node* node2){
        if(!node1){
            return node2;
        }
        if(!node2){
            return node1;
        }
        Node* ans=new Node(-1);
        Node* temp=ans;
        while(node1 && node2){
            if(node1->data<node2->data){
                temp->next = node1;
                temp=node1;
                node1=node1->next;
            }
            else{
                temp->next=node2;
                temp=node2;
                node2=node2->next;
            }
        }
        while(node1){
            temp->next=node1;
            temp=node1;
            node1=node1->next;
        }
        while(node2){
            temp->next=node2;
            temp=node2;
            node2=node2->next;
        }
        temp->next=NULL;
        ans=ans->next;
        return ans;
    }
    
    Node * mergeKLists(Node *arr[], int K)
    {
        Node *in = NULL;
        Node* ans=mergesorted(in, arr[0]);
        for(int i=1; i<K; i++){
            ans = mergesorted(ans, arr[i]);
        }
        return ans;
    }
};
