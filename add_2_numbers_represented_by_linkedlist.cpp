class Solution
{
    public:
    typedef struct Node node;

    node* reverseList(node* head){
        node* next_pointer = head;
        node* current_pointer = NULL;   
        node* address_setter = NULL;    
    
        while(next_pointer != NULL){
            address_setter = current_pointer;
            current_pointer = next_pointer;
            next_pointer = next_pointer -> next;
            current_pointer -> next = address_setter;
        } 
        return current_pointer;
    }

    node* addTwoLists(node* first, node* second){
        first = reverseList(first);
        second = reverseList(second);
    
        int flag1 = 0, flag2 = 0;   
        int carry = 0;
        int sum = 0;
        node* head = NULL; 
        node* prev_head = NULL;
    
        while(flag1 != 1 || flag2 != 1 || carry != 0){
            sum = (first -> data) + (second -> data) + carry;
            
            if(sum > 9){
                carry = 1;
            } 
            else{
                carry = 0;
            }
            head = new node(sum % 10);

            if(prev_head == NULL){
                prev_head = head;
                prev_head -> next = NULL;
            }
            else{
                head -> next = prev_head;
                prev_head = head;
            }

            if(flag1 == 0){
                if(first -> next != NULL){
                    first = first -> next;
                }
                else{
                    first -> data = 0;
                    flag1 = 1;
                }
            }
            if(flag2 == 0){
                if(second -> next != NULL){
                    second = second -> next;
                }
                else{
                    second -> data = 0;
                    flag2 = 1;
                }
            }
        }
        return prev_head;
    }
};
