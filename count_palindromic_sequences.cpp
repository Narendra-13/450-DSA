class Solution{
    public:
    /*You are required to complete below method */
    int dp[1001][1001];
    int MOD = 1000000007;
    string S;
    /*long long int func(int i, int j, string s){
        if(i>j)
            return 0;
        if(i==j)
            return 1;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(s[i] == s[j]){
            return dp[i][j] = (func(i+1, j, s) + func(i, j-1, s) + 1)%mod;
            // return dp[i][j];
        }else{
            return dp[i][j] = (func(i+1, j, s) + func(i, j-1, s) - func(i+1, j-1, s))%mod;
            // return dp[i][j];
        }
    }*/
    long long int  countPS(string str)
    {
        const int n = str.length();
        memset(dp, -1, sizeof(dp));
        S = str;
        long long int ans = solve(0, n-1);
        return ans<0?ans+MOD:ans;
   }
   
    long long int solve(int i, int j){
       if(i > j) return 0;
       if(dp[i][j] != -1) return dp[i][j]%MOD;
       if(i == j) return dp[i][j] = 1;
       if(S[i] == S[j]){
           return dp[i][j] = (solve(i+1, j)%MOD + solve(i, j-1)%MOD + 1)%MOD;
       }
       else{
           return dp[i][j] = (solve(i+1, j)%MOD + solve(i, j-1)%MOD - solve(i+1, j-1)%MOD)%MOD;
       }
    }
};
