class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    void deleteEle(int *arr, int j, int *size){
        for(int i=j; i<*size; i++){
            arr[i] = arr[i+1];
        }
        *size -= 1;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        
        /*int min = INT_MAX;
        int min_index;
        for(int i=1; i<=k; i++){
            for(int j=l; j<=r; j++){
                // int min = INT_MAX;
                if(arr[j] < min){
                    min_index = j;
                    min = arr[j];
                }
            }
            if(i != k)
                deleteEle(arr, min_index, &r);
            else
                return min;
        }*/
        vector<int> v(arr,arr+r+1);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
