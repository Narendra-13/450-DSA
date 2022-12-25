class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector <int> vec(n);
        stack <int> st;
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
            while(!st.empty() && a[i] < a[st.top()]){
                vec[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            vec[st.top()] = -1;
            st.pop();
        }
        return vec;
    }
};
