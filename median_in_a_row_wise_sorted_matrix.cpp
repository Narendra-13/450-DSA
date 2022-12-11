class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        vector <int> vec;
        for(auto big : matrix){
            for(auto v : big){
                vec.push_back(v);
            }
        }
        sort(vec.begin(), vec.end());
        if(vec.size()%2 == 1){
            return(vec[vec.size()/2]);
        }else{
            return((vec[vec.size()/2] + vec[vec.size()/2 + 1])/2);
        }
    }
};
