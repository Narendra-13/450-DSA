class Solution{
public:
    Node* divide(int N, Node *head){
        /*Node *trav1 = head;
        Node *trav2 = head;
        while(trav2 != NULL){
            if(trav2->data%2 == 1){
                // trav1 = trav1->next;
                trav2 = trav2->next;
            }else{
                if(trav1 == trav2){
                    trav2 = trav2->next;
                    trav1 = trav1->next;
                }else{
                    int temp = trav2->data;
                    trav2->data = trav1->data;
                    trav1->data = temp;
                    trav1 = trav1->next;
                    Node *rea = trav1;
                    int store = trav2->data;
                    while(rea != trav2){
                        int s2 = rea->data;
                        rea->data = store;
                        store = s2;
                        rea = rea->next;
                    }
                    trav2->data = store;
                    trav2 = trav2->next;
                }
            }
        }
        return head;*/
        vector <int> even;
        vector <int> odd;
        Node *trav = head;
        while(trav != NULL){
            if(trav->data%2 == 0)
                even.push_back(trav->data);
            else
                odd.push_back(trav->data);
            trav = trav->next;
        }
        trav = head;
        for(int i=0; i<even.size(); i++){
            trav->data = even[i];
            trav = trav->next;
        }
        for(int j=0; j<odd.size(); j++){
            trav->data = odd[j];
            trav = trav->next;
        }
        return head;
    }
};
