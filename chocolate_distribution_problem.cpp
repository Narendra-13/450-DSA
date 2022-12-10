class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code :
        sort(a.begin(), a.end());
        long long minimum = (a[m-1] - a[0]);
        for(int i=1; i<(n-m+1); i++){
            minimum = min(minimum, (a[m+i-1] - a[i])); 
        }
        return minimum;
    }
};
