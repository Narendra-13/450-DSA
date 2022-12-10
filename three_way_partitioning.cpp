class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0; i<array.size(); i++){
            if(array[i] > maxi)  
                maxi = array[i];
            else if(array[i] < mini)
                mini = array[i];
        }
        // if(a < mini || b > maxi){
        //     cout<<0;
        //     return ;
        // }
        vector <int> new_one;
        for(int i=0; i<array.size(); i++){
            if(array[i] < a)
                new_one.push_back(array[i]);
        }
        for(int i=0; i<array.size(); i++){
            if(array[i] >= a && array[i] <= b)
                new_one.push_back(array[i]);
        }
        for(int i=0; i<array.size(); i++){
            if(array[i] > b)
                new_one.push_back(array[i]);
        }
        array = new_one;
        // cout<<1;
    }
};
