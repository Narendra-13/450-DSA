class Solution {
	public:
	    int lcs(int x, int y, string a, string b){
	        int i, j, dp[x+1][y+1];
	        memset(dp, 0, sizeof(dp));
	        
	        for(int i=0; i<=x; i++){
	            for(int j=0; j<=y; j++){
	                if(i== 0 || j==0)
	                    dp[i][j] = 0;
	                else if(a[i-1] == b[j-1] && i!=j)
	                    dp[i][j] = 1 + dp[i-1][j-1];
	                else
	                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	            }
	        }
	        return dp[x][y];
	        
	    }
		int LongestRepeatingSubsequence(string str){
		    int n = str.size();
		    return lcs(n, n, str, str);
		}
};
