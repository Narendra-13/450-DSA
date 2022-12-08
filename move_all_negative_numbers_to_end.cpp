class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int pos[n];
        int neg[n];
        int p_index =0 , n_index =0;
        for(int i=0; i<n; i++){
            if(arr[i] >= 0){
                pos[p_index] = arr[i];
                p_index++;
            }else{
                neg[n_index] = arr[i];
                n_index++;
            }
        }
        for(int i=0; i<p_index; i++){
            arr[i] = pos[i];
        }
        for(int i=p_index; i<n; i++){
            arr[i] = neg[i - p_index];
        }
    }
};
