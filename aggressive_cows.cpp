class Solution {
public:
    
    bool canPlaceCows(vector <int> &arr, int n, int cows, int dist){
        int cord = arr[0];
        int cnt = 1;
        for(int i=1; i<n; i++){
            if(arr[i] - cord >= dist){
                cnt++;
                cord = arr[i];
            }  
            if(cnt == cows)
                return true;
        }
        return false;
    }
    
    int solve(int n, int k, vector<int> &stalls) {
        int low = 1;
        int res = 0;
        sort(stalls.begin(), stalls.end());
        int high = stalls[n-1] - stalls[0];
        while(low <= high){
            int mid  = (low+high)/2;
            if(canPlaceCows(stalls, n, k, mid)){
                res = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return res;
        // Write your code here
    }
};
