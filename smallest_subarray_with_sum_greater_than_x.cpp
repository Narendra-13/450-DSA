class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        /*int sum = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > x)
                return 1;
            sum = sum+arr[i];
        } 
        if(sum <= x){
            return 0;
        }
        int count = 0;
        int glob_c = INT_MAX;
        sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            count++;
            if(sum > x){
                while(sum > x){
                    sum = sum - arr[i-count];
                    count--;
                }
                sum = sum + arr[i - count++];
            }
            glob_c = min(glob_c, count);
        }
        return glob_c;*/
        
        int sum = 0, min_len = n + 1;
        int start = 0, end = 0;
        while (end < n) {
            while (sum <= x && end < n)
                sum += arr[end++];
            while (sum > x && start < n) {
                if (end - start < min_len)
                    min_len = end - start;
                sum -= arr[start++];
            }
        }
        return min_len;
    }
};
