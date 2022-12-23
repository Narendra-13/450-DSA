void insert(stack <int> &st, int x){
    if(st.empty() || st.top() < x){
        st.push(x);
        return;
    }
    int a = st.top();
    st.pop();
    insert(st, x);
    st.push(a);
}

void sortst(stack <int> &st){
    if(st.empty()){
        return ;
    }
    int a = st.top();
    st.pop();
    sortst(st);
    insert(st, a);
}

void SortedStack :: sort()
{
   sortst(s);
}
