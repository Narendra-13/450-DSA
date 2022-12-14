class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        string str ="";
        vector <int> vec;
        for(int i=0; i<N; i++)
            str += arr[i];
        next_permutation(str.begin(), str.end());
        for(int i=0; i<str.size(); i++){
            vec.push_back(str[i]);
        }
        return vec;
    }
};
