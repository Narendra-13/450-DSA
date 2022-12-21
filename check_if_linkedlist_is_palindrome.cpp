class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack <Node *> st;
        Node *cur = head;
        while(cur != NULL){
            st.push(cur);
            cur = cur->next;
        }
        Node *temp = head;
        while(temp != NULL){
            if(temp->data == st.top()->data){
                st.pop();
                temp = temp->next;
            }else{
                return 0;
            }
        }
        return 1;
    }
};
