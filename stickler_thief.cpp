class Solution
{
    public:
    int dp[10001];
    // memset(dp, -1, sizeof(dp));
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        dp[0] = arr[0];
        dp[1] = max(arr[0],arr[1]);
        for(int i=2; i<n; i++){
            dp[i] = max(dp[i-1], dp[i-2]+arr[i]);
        }
        return dp[n-1];
        // Your code here
    }
};
