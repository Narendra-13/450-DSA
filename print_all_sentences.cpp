class Solution{
    public:
    void travel(vector<vector<string>> &list, vector<vector<string>> &ans, int i, vector<string> curr){
        if(i == list.size()){
            ans.push_back(curr);
            return;
        }
        for(int j = 0; j < list[i].size(); j++){
            curr.push_back(list[i][j]);
            travel(list, ans, i + 1, curr);
            curr.pop_back();
        }
        return;
    }
    
    vector<vector<string>> sentences(vector<vector<string>>&list){
        vector <vector <string> > ans;
        travel(list, ans, 0, {});
        return ans;
    }
};
