class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack <int> st;
        int j = 0;
        for(int i=0; i<A.size(); i++){
            st.push(A[i]);
            while(!st.empty() && st.top() == B[j]){
                st.pop();
                j++;
            }
        }
        while(!st.empty() && B[j] == st.top()){
            st.pop();
            j++;
        }
        if(st.empty()){
            return 1;
        }else{
            return 0;
        }
    }
};
