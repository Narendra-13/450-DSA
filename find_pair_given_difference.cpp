bool bin(int arr[], int n, int x, int l, int r){
    if (l>r)
        return false;
    int mid = (l+r)/2;
    if (arr[mid] == x)
        return true;
    else if (arr[mid] > x)
        return bin(arr,n,x,l,mid-1);
    else
        return bin(arr,n,x,mid+1,r);
}

bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    for (int i{1};i<size;i++){
        int pair1 = n+arr[i];
        int pair2 = arr[i]-n;
        
        if (bin(arr,size,pair1,0,i-1) || bin(arr,size,pair2,0,i-1))
            return true;
    }
    return false;
}
