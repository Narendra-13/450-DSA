class Solution
{
    public:
    string rearrangeString(string str)
    {
        unordered_map <char, int> mp;
        for(int i=0; i<str.size(); i++){
            mp[str[i]]++;
        }
        priority_queue <pair <int, char> > pq;
        for(char i= 'a'; i<= 'z'; i++)
        {
            if(mp[i] > 0)
                pq.push({mp[i],i});
            if(mp[i] > (str.size()+1)/2)
                return "-1";
        }
        
        string res = "";
        
        while(pq.size() >= 2)
        {
            pair <int, char> a = pq.top();
            pq.pop();
            
            pair<int, char> b = pq.top();
            pq.pop();
            
            res += a.second;
            res += b.second;
            
            if(a.first-1 > 0)
                pq.push({a.first-1, a.second});
            if(b.first-1 > 0)
                pq.push({b.first-1, b.second});
            
            // return res;
        }
        while(!pq.empty()){
                res += pq.top().second;
                pq.pop();
            }
        return res;
    }
};
