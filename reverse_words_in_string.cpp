class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string str ="";
        stack <string> st;
        for(int i=0; i<S.size(); i++){
            if(S[i] != '.'){
                str = str + S[i];
            }else{
                st.push(str);
                str.clear();
            }
        }
        st.push(str);
        string new_one = "";
        // cout<<st.top()<<" ";
        while(!st.empty()){
            // cout<<st.top()<<" ";
            new_one = new_one + st.top();
            st.pop();
            new_one = new_one + ".";
        }
        new_one.pop_back();
        return new_one;
    }
};
