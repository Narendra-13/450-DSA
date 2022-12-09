class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            if(arr[i] == 0)
                return true;
        }
        unordered_set<int> s;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == 0 || s.find(sum) != s.end())
                return true;
            s.insert(sum);
        }
        return false;
        //Your code here
    }
};
