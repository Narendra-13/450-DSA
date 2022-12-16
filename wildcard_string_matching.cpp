class Solution{
    public:
    // memset(dp, -1, sizeof(dp));
    int solve(string p, string s,vector<vector<int>> &dp, int i, int j){
        if(i==-1 && j==-1)
            return 1;
        if(j==-1){
            for(int k=0; k<i; k++){
                if(p[k] != '*')
                    return 0;
            }
            return 1;
        }
        if(i==-1)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(p[i] == s[j] || p[i] == '?')
            return dp[i][j] = solve(p, s, dp, i-1, j-1);
        if(p[i] == '*'){
            int op1 = solve(p, s, dp, i-1, j);
            int op2 = solve(p, s, dp, i, j-1);
            dp[i][j] = op1 || op2;
            return dp[i][j];
        }
        return dp[i][j] = 0;
    }
    
    bool match(string wild, string pattern)
    {
        vector <vector <int> > dp(wild.size(), vector <int> (pattern.size(), -1));
        int x = solve(wild, pattern, dp, wild.size()-1, pattern.size()-1);
        if(x==1)
            return true;
        else
            return false;
        /*stack <char> wd;
        stack <char> pt;
        for(int i=0; i<wild.size(); i++){
            wd.push(wild[i]);
        }
        for(int i=0; i<pattern.size(); i++)
            pt.push(pattern[i]);
        while(!wd.empty() && !pt.empty()){
            if(wd.top() == '?'){
                wd.pop();
                pt.pop();
            }else if(wd.top() == '*'){
                wd.pop();
                while(pt.size() > wd.size())
                    pt.pop();
            }else if(wd.top() == pt.top()){
                wd.pop();
                pt.pop();
            }else{
                return false;
            }
        }
        if(wd.empty() && pt.empty())
            return true;
        else
            return false;*/
    }
};
