class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0; i<N; i++){
            if(A[i] > max)
                max = A[i];
            if(A[i] < min)
                min = A[i];
        }
        int sum = max + min;
        return sum;
        // cout<<INT_MIN<<" ";
        // cout<<INT_MAX;
    	//code here.
    }
};
