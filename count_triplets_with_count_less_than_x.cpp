class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long count = 0;
	    sort(arr, arr+n);
	    for(int i=0; i<n-2; i++){
	        int left = i+1;
	        int right = n-1;
	        while(left<right){
	            int temp = arr[i]+arr[left]+arr[right];
	            if(temp < sum){
	                count+= right-left;
	                left++;
	            }else if(temp>=sum){
	                right--;
	            }
	        }
	    }
	    return count;
	}
};
