class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        int count=0;
        int glob=0;
        unordered_set<int> v;
        for(int i=0; i<N; i++){
            v.insert(arr[i]);
        }
        auto it = v.begin();
        while(v.size() != 0){
            int min = INT_MAX;
            for(auto itr : v){
                if(itr < min)
                    min = itr;
            }
            while(v.find(min) != v.end()){
                v.erase(min);
                min++;
                count++;
            }
            if(count > glob){
                glob = count;
                // count = 0;
            }
            count = 0;
        }
        return glob;
        
    }
};
