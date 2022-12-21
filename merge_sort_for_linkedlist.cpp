class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node *merge(Node *first, Node *second){
        Node *fref = first;
        Node *sref = second;
        Node *st = NULL, *end = NULL;
        if(fref == NULL)
            return sref;
        if(sref == NULL)
            return sref;
        if(fref->data > sref->data){
            end = new Node(sref->data);
            st = end;
            sref = sref->next;
        }else{
            end = new Node(fref->data);
            st = end;
            fref = fref->next;
        }
        while(fref != NULL && sref != NULL){
            if(fref->data > sref->data){
                end->next = new Node(sref->data);
                end = end->next;
                sref = sref->next;
            }else{
                end->next = new Node(fref->data);
                end = end->next;
                fref = fref->next;
            }
        }
        while(sref != NULL){
            end->next = new Node(sref->data);
            end = end->next;
            sref = sref->next;
        }
        while(fref != NULL){
            end->next = new Node(fref->data);
            end = end->next;
            fref = fref->next;
        }
        return st;
    }/*
    Node* merge(Node* list1, Node* list2) {
           if(!list1) return list2;
           if(!list2) return list1;

           if(list1->data < list2->data){
               list1->next = merge(list1->next , list2);
               return list1;
           }else {
               list2->next = merge(list1 , list2->next);
               return list2;
           }
    }*/
    
    Node* findMid(Node* head, Node* tail){
        Node* slow = head;
        Node* fast = head;
        while(fast != tail && fast->next != tail){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* mergeS(Node* head, Node* tail){
        if(head == tail){
            Node* newNode = new Node(head->data);
            return newNode;
        }
        Node* mid = findMid(head, tail);
        Node* lsh = mergeS(head, mid);
        Node* rsh = mergeS(mid->next, tail);
        return merge(lsh, rsh);
    }
    
    
    Node* mergeSort(Node* head) {
        if(head == NULL || head->next == NULL)
            return head;
        Node *cur = head;
        while(cur->next != NULL)
            cur = cur->next;
        return mergeS(head, cur);
        // your code here
    }
};
