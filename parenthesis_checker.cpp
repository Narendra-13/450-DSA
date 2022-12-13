class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        /*int f_o=0, f_c =0, c_o =0, c_c = 0, s_o = 0, s_c =0;
        for(int i=0; i<x.size(); i++){
            if(f_c > f_o || c_c > c_o || s_c > s_o)
                return false;
            if(x[i] == '{')
                f_o++;
            else if(x[i] == '}')
                f_c++;
            else if(x[i] == '(')
                c_o++;
            else if(x[i] == ')')
                c_c++;
            else if(x[i] == '[')
                s_o++;
            else if(x[i] == ']')
                s_c++;
        }
        if(f_c == f_o && s_c == s_o && c_c == c_o)
            return true;
        return false;*/
        stack<char>st;
        int n=x.length();
        bool ans =true;
        for(int i=0;i<n;i++){
            if(x[i]=='[' || x[i]=='{' || x[i]=='('){
                st.push(x[i]);
            }else if(x[i]==')'){
                if(!st.empty() and st.top()=='('){
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }else if(x[i]=='}'){
                if(!st.empty() and st.top()=='{'){
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }else if(x[i]==']'){
                if(!st.empty() and st.top()=='['){
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }
        }
        if(!st.empty())
        {
            return false;
        }
        return ans;
    }
};
