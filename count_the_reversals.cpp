int countRev (string s)
{
    stack <char> st;
    int count =0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '{'){
            st.push('{');
        }else if(s[i] == '}' && st.empty()){
            // s[i] = '{';
            // i--;
            count++;
            // cout<<count<<" 1na ";
            st.push('{');
        }else
            st.pop();
    }
    if(st.empty())
        return count;
    else{
        while(!st.empty()){
            st.pop();
            if(st.empty()){
                return -1;
            }
            st.pop();
            count += 1;
            // cout<<count<<" 2na ";
        }
    }
    return count;
}
