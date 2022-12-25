class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        vector <int> vec(n);
        stack <int> st;
        st.push(0);
        for(int i=1; i<n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                vec[st.top()] = arr[i];
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
