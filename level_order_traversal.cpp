class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector <int> vec;
        queue <Node *> q;
        if(node == NULL){
            return vec;
        }
        q.push(node);
        while(!q.empty()){
            int count = q.size();
            for(int i=0; i<count; i++){
                Node *temp = q.front();
                q.pop();
                vec.push_back(temp->data);
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
        }
        return vec;
    }
};
