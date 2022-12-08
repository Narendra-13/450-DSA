class Solution{
    public:
    /*void deleteEle(long long *arr, int *n, int i) 
    { 
        *n = *n - 1;
        for (int j=i; j<*n; j++)
            arr[j] = arr[j+1];
    }*/
    void rearrange(long long *arr, int n) 
    { 
        /*long long newarr[n];
        long long i = 0;
        long long index =0;
        long long j = n-1;
        while(i<=j){
            if(i<j){
            newarr[index] = arr[j];
            index += 1;
            newarr[index] = arr[i];
            }
            if(i == j){
                newarr[index] = arr[j];
            }
            ++i; 
            --j;
            index += 1;
        }
        for(long long k=0; k<index; k++){
    	    arr[k] = newarr[k];
        }*/
        vector <long> j;
        for(int i=0;i<n;i++)
        {
            j.push_back(arr[n-1-i]);
            j.push_back(arr[i]);
        }       
        for(int i=0;i<n;i++)
        {
            arr[i] = j.at(i);
        } 
    }
};
