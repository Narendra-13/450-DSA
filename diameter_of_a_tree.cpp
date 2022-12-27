class Solution {
  public:
    
    int height(Node* node){
        if(node == NULL){
            return 0;
        }
        else{
            return max(height(node->right), height(node->left))+1;
        }
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if(root == NULL)
            return 0;
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+1+height(root->right);
        int ans=max(op1,max(op2,op3));
        return ans;
    }
};
