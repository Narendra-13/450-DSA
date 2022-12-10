class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<double> new_array;
        for(int i=0;i<array1.size();i++)
        {
            new_array.push_back(array1[i]);
        }
        for(int i=0;i<array2.size();i++)
        {
            new_array.push_back(array2[i]);
        }
        
        sort(new_array.begin(),new_array.end());
        int n=new_array.size(); 
        int mid=n/2;
        if(n%2==0)
        {
            return (new_array[mid]+ new_array[mid-1])/2;
        }else{
            return new_array[mid];
        }
    }
};
