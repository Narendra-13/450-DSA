class Solution{
    public:
    int find(int key, int in[], int s, int l){
        for(int i=s; i<=l; i++){
            if(in[i] == key){
                return i;
            }
        }
    }
    Node *fnl(int s, int l, int in[], stack <int> &pr)
    {
        if(s>l){
            return NULL;
        }
        if(s == l){
            Node *temp = new Node(in[s]);
            pr.pop();
            return temp;
        }else{
            int x = pr.top();
            pr.pop();
            int nb = find(x, in, s, l);
            Node *temp = new Node(x);
            temp->left = fnl(s, nb-1, in, pr);
            temp->right = fnl(nb+1, l, in, pr);
            return temp;
        }
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        stack <int> pr;
        for(int i=n-1; i>=0; i--){
            pr.push(pre[i]);
        }
        return fnl(0, n-1, in, pr);
    }
};
