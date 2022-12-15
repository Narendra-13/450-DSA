class Solution{
    public:
    int findSubString(string str)
    {
        unordered_map<char, int> mp;
        for(auto &e : str){
            mp[e]++;
        }
        int dist = mp.size();
        int head = -1;
        int tail = 0, count = 0;
        int ans = str.size();
        mp.clear();
        while(tail < str.size()){
            while(head +1 <str.size() && count < dist){
                mp[str[++head]]++;
                if(mp[str[head]] == 1)
                    count++;
            }
            if(count == dist){
                ans = min(ans, head-tail+1);
            }
            if(head >= tail){
                mp[str[tail]]--;
                if(mp[str[tail]] == 0)
                    count--;
                tail++;
                if(count == dist)
                    ans = min(ans, head-tail+1);
            }
            // mp.clear();
        }
        return ans;
    }
};
