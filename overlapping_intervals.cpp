class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector <int> a;
        vector <int> b;
        stack <vector<int>> st1;
        stack <vector<int>> st2;
        sort(intervals.begin(), intervals.end());
        reverse(intervals.begin(), intervals.end());
        for(int i=0; i<intervals.size(); i++){
            st1.push(intervals[i]);
        }
        for(int i=0; i<intervals.size()-1; i++){
            a = st1.top();
            st1.pop();
            b = st1.top();
            st1.pop();
            if(a[1] >= b[0]){
                vector <int> jst;
                jst.push_back(a[0]);
                jst.push_back(max(a[1], b[1]));
                st1.push(jst);
            }else{
                st2.push(a);
                st1.push(b);
            }
        }
        vector <vector <int>> vec;
        while(!st2.empty()){
            vec.push_back(st2.top());
            st2.pop();
        }
        reverse(vec.begin(), vec.end());
        while(!st1.empty()){
            vec.push_back(st1.top());
            st1.pop();
        }
        return vec;
    }
};
