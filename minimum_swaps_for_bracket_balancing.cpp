class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        stack <char> st;
        int i =0;
        int count = 0;
        while(i< S.size()){
            // int n = i;
            bool val = st.empty();
            if(val){
                st.push(S[i]);
                ++i;
                continue;
            }
            if(S[i] == ']' && st.top() == ']'){
                st.push(']');
            }else if(S[i] == ']' && st.top() == '['){
                st.pop();
            }else if(S[i] == '[' && st.top() == '['){
                st.push('[');
            }else{
                count += st.size();
                st.pop();
            }
            ++i;
        }
        return count;
        /*int x = st.size();
        return (count+x);
        int openBrackets = 0;
        int closeBrackets = 0;
        int ans = 0;
        for(auto &e : S){
            if(e == ']'){
                closeBrackets++;
            }
            else{
                if(closeBrackets > openBrackets){
                    ans += closeBrackets - openBrackets;
                }
                openBrackets++;
            }
        }
        return ans;*/
    }
};
