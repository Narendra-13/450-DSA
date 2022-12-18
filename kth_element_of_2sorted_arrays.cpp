class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int f=0, s =0;
        int i=1;
        while(i<k && f<n && s<m){
            if(arr1[f] < arr2[s]){
                i++;
                f++;
            }else{
                i++;
                s++;
            }
        }
        while(i<=k && f<n && s == m){
            if(i==k)
                return arr1[f];
            i++;
            f++;
            
        }
        while(i<=k && s<m && f == n){
            if(i==k)
                return arr2[s];
            i++;
            s++;
        }
        if(arr1[f] < arr2[s]){
            return arr1[f];
        }else{
            return arr2[s];
        }
    }
};
