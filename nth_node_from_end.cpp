int getNthFromLast(Node *head, int n)
{
       Node *pos = head;
       Node *trav = head;
       for(int i=0; i<n; i++){
           if(pos == NULL){
               return -1;
           }else{
               pos = pos->next;
           }
       }
       while(pos != NULL){
           pos = pos->next;
           trav = trav->next;
       }
       return trav->data;
}
