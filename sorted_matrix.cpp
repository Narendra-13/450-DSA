class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<vector <int> > req;
        vector <int> added;
        vector <int> temp;
        for(auto vec : Mat){
            for(auto v : vec){
                temp.push_back(v);
            }
        }
        sort(temp.begin(), temp.end());
        auto it = temp.begin();
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                
                added.push_back(*it);
                it++;
                // temp.erase(it);
            }
            req.push_back(added);
            added.clear();
        }
        return req;
    }
};
