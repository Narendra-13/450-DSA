class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            /*int i=0, j=0;
            while(i<n && j<m){
                if(arr1[i] < arr2[j]){
                    i++;
                }else{
                    int temp = arr1[i];
                    arr1[i] = arr2[j];
                    while(arr2[j+1]<temp && j+1<m){
                        arr2[j] = arr2[j+1];
                        j++;
                    }
                    arr2[j] = temp;
                    j=0;
                    // arr2[j] = temp;
                    i++;
                }
            }*/
            int  i=0,j=0, k=n-1;     
            while(i<=k && j<m){
                if(arr1[i]>arr2[j]){
                    swap(arr2[j],arr1[k]);
                    k--;
                    j++;
                }
                else{
                    i++;
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        }
};
