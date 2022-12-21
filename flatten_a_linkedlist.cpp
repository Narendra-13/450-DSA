/*void insertsortedly(Node **head, int x){
    Node *create = new Node(x);
    if(*head == NULL){
        *head = create;
        return ;
    }
    Node *trav = *head, *res = *head;
    // Node *org = *head;
    while(trav->next != NULL && x > trav->next->data){
        trav = trav->next;
    }
    if(trav->next == NULL){
        trav->next = create;
    }else{
        Node *store = trav->next;
        trav->next = create;
        create->next = store;
    }
    Node *org = res;
    *head = org;
    return ;
}    

Node *flatten(Node *root)
{
   Node *cur=root;
   Node *head = NULL;
   while(cur != NULL){
       insertsortedly(&head, cur->data);
       Node *down = cur->bottom;
       while(down!=NULL){
           insertsortedly(&head, down->data);
           down = down->bottom;
       }
       cur = cur->next;
   }
   return head;
}*/
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
            temp->bottom=node1;
            temp=node1;
            node1=node1->bottom;
        }
        else{
            temp->bottom=node2;
            temp=node2;
            node2=node2->bottom;
        }
    }
    while(node1){
        temp->bottom=node1;
        temp=node1;
        node1=node1->bottom;
    }
    while(node2){
        temp->bottom=node2;
        temp=node2;
        node2=node2->bottom;
    }
    temp->next=NULL;
    ans=ans->bottom;
    return ans;
}
Node *flatten(Node *root)
{
   if(!root || !root->next){
       return root;
   }
   Node* down=root;
   Node* right=flatten(down->next);
   //down->next=NULL;
   Node* ans=mergesorted(down,right);
   return ans;
}
