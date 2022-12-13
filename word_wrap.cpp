class Solution {
public:

    int dp[501][2001];
    // memset(dp, -1, sizeof(dp));
    int rec(int i, int rem, vector <int>& arr, int &k){
        if(i == arr.size())
            return 0;
        if(dp[i][rem] != -1)
            return dp[i][rem];
        int ans;
        if(arr[i] > rem)
            ans = rec(i+1, k-arr[i]-1, arr, k) + (rem+1)*(rem+1);
        else{
            int ch1 = rec(i+1, k-arr[i]-1, arr, k) + (rem+1)*(rem+1);
            int ch2 = rec(i+1, rem - arr[i]-1, arr, k);
            ans = min(ch1, ch2);
        }
        dp[i][rem] = ans;
        return dp[i][rem];
    }
    int solveWordWrap(vector<int>nums, int k) 
    { 
        memset(dp, -1, sizeof(dp));
        return rec(0, k, nums, k);
        /*int sum = 0;
        int pres = 0;
        int store = 0, count =0;
        while(count < nums.size()){
            int i=0;
            while((count+i)<nums.size() && pres+nums[i+count] <= k){
                pres += nums[i+count] + 1;
                i++;
            }
            count += i;
            pres--;
            store = k-pres;
            pres = 0;
            sum += pow(store, 2);
            // cout<<sum<<" ";
        }
        sum = sum - pow(store,2);
        return sum;*/
    }
};
