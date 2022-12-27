class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        if(node == NULL){
            return ;
        }else{
            Node *rt = node->right;
            Node *lt = node->left;
            node->right = lt;
            node->left = rt;
            mirror(node->right);
            mirror(node->left);
        }
    }
};
