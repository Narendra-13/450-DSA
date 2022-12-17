class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int new_arr[n+1];
        int *brr = new int(2);
        int n1, n2;
        // cout<<arr[0]<<" ";
        memset(new_arr, 0, sizeof(new_arr));
        for(int i=0; i<n; i++){
            new_arr[arr[i]]++;
            if(new_arr[arr[i]] == 2)
                n1 = arr[i];
        }
        for(int i=1; i<n+1; i++){
            if(new_arr[i] == 0){
                n2 = i;
                break;
            }
        }
        brr[0] = n1;
        brr[1] = n2;
        return brr;
    }
};
