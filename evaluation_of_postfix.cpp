class Solution
{
    public:
    int operation(int a, int b, char ch){
        if(ch == '+'){
            return a+b;
        }else if(ch == '-'){
            return a-b;
        }else if(ch == '*'){
            return a*b;
        }else{
            return a/b;
        }
    }
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack <int> st;
        // stack
        for(int i=0; i<S.size(); i++){
            if(isdigit(S[i])){
                st.push(S[i] - '0');
            }else{
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int res = operation(a, b, S[i]);
                st.push(res);
            }
        }
        return st.top();
    }
};
