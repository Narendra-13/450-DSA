class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long curr=1;
        long long maxp=INT_MIN;
        for(int i=0;i<n;i++){
            curr*=arr[i];
            maxp=max(maxp,curr);
            if(curr==0){
                curr=1;
            }
        }
        curr=1;
        for(int i=n-1;i>=0;i--){
            curr*=arr[i];
            maxp=max(maxp,curr);
            if(curr==0){
                curr=1;
            }
        }
        return maxp;
    }
};
