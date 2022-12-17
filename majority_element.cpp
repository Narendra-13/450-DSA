class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map <int, int> mp;
        for(int i=0; i<size; i++){
            mp[a[i]]++;
            if(mp[a[i]] > size/2)
                return a[i];
        }
        return -1;
        
    }
};
