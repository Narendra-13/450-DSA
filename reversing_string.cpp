class Solution {
public:
    void reverseString(vector<char>& s) {
        vector <char> new_one;
        for(int i=s.size()-1; i>=0; i--)
            new_one.push_back(s[i]);
        s = new_one;
        return ;
    }
};
