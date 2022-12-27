class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *head){
        if(head == NULL){
            return 0;
        }else{
            return max(height(head->left), height(head->right))+1;
        }
    }
    
    bool isBalanced(Node *root)
    {
        if(root == NULL){
            return true;
        }
        int l = height(root->left);
        int r = height(root->right);
        return((abs(l-r)==1 || abs(l-r)==0) && isBalanced(root->left) && isBalanced(root->right)); 
    }
};
