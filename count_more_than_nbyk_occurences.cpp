class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        vector <int> v;
        for(int i=0; i<n; i++){
            v.push_back(arr[i]);
        }
        int req = 0;
        req = n/k;
        int total = 0;
        while(v.size() != 0){
            int count = 0;
            auto it = v.begin(); 
            int ele = *it;
            while(find(v.begin(), v.end(),ele) != v.end()){
                v.erase(find(v.begin(), v.end(), ele));
                count++;
                // cout<<count<<" ";
            }
            if(count > req){
                total++;
            }
        }
        return total;
    }
};
