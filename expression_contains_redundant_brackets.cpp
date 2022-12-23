class Solution {
  public:
    int checkRedundancy(string str) {
        int n = str.length();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (str[i] == ')') {
                char top = st.top();
                st.pop();
                bool flag = true;
                while (top != '(') {
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        flag = 0;
                    }
                    top = st.top();
                    st.pop();
                }
                if (flag == true) {
                    return 1;
                }
            }
            else {
                st.push(str[i]);
            }
        }
        return 0;
    }
};
