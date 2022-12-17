class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int n=nums.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={nums[i],i};
        }
        sort(v.begin(),v.end());
        int count =0;
        for(int i=0;i<n;i++){
            if(i==(v[i].second)){
               continue;
            }else{
                count++;
                swap(v[i],v[v[i].second]);
                i--; 
            }
        }
	    /*vector <int> st;
	    unordered_map <int, int> mp;
	    for(int i=0; i<nums.size(); i++){
	        st.push_back(nums[i]);
	        mp[nums[i]] = i;
	    }
	    sort(st.begin(), st.end());
	    int count = 0;
	    for(int i=0; i<nums.size(); i++){
	        if(nums[i] != st[i]){
	            swap(nums[i], nums[mp[st[i]]]);
	            count++;
	        }
	    }*/
	    return count;
	}
};
