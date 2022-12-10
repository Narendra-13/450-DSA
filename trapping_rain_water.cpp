class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int left[n];
        int right[n];
        left[0] = arr[0];
        for(int i=1; i<n; i++){
            left[i] = max(left[i-1], arr[i]);
        }
        right[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            right[i]= max(arr[i],right[i+1]);
        }
        long long trappedWater =0;
        for(int i=0; i<n; i++)
        {
            int waterLevel = min(left[i], right[i]);
            trappedWater += (waterLevel - arr[i]);
        }
        return trappedWater;
    }
};
