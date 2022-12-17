class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       long long prod = 1;
       int count = 0;
       for(int i=0; i<n; i++){
           if(nums[i] == 0){
               count++;
               continue;
           }
           prod *= nums[i];
       }
            // prod *= nums[i];
        vector <long long int> vec;
        for(int i=0; i<n; i++){
            if(count == 0){
                vec.push_back(prod/nums[i]);
            }else if(count == 1 && nums[i] == 0){
                vec.push_back(prod);
            }else if(count == 1 && nums[i] != 0){
                vec.push_back(0);
            }else{
                vec.push_back(0);
            }
        }
        return vec;
        //code here        
    }
};
