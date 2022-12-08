class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        /*int sum[n];
        int total =0;
        int index =0;
        for(int i=0; i<n; i++){
            if((arr[i] >= 0) && (i != n-1)){
                total += arr[i];
            }
            else if(arr[i] < 0){
                if(i != 0){
                sum[index] = total;
                total = arr[i];
                index++;
                }
                else{
                    total = arr[i];
                    sum[index] = total;
                    index++;
                    
                }
            }else if(i == (n-1)){
                total += arr[i];
                sum[index] = total;
                index++;
            }
        }
        
        for(int i=0; i<index; i++){
            cout<<sum[i]<<" ";
        }
        int max = 0;
        int globmax =0;
        for(int i=0; i<index; i++){
            if(sum[i] > 0 && (i != index-1)){
                max += sum[i];
            }
            else if(sum[i] <0){
                if(max > globmax){
                    globmax = max;
                }
                max = 0;
            }else if(i == index-1){
                max += sum[i];
                if(max > globmax){
                    
                    globmax = max;
                }
            }
        }
        if(globmax == 0){
            sort(sum, sum + index);
            globmax = sum[index - 1];
        }
        return globmax;*/
        int max_sum=INT_MIN;
        int cur_sum=0;

        for(int i=0;i<n;i++){
            cur_sum=cur_sum+arr[i];
            if(cur_sum>max_sum)
                max_sum=cur_sum;
            if(cur_sum<0)
                cur_sum=0;

        }
        return max_sum;
        
    }
};
