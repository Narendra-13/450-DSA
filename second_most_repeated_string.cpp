class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        map <string, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        int m1, m2;
        string st1 = "", st2 = "";
        m1=m2=INT_MIN;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            auto p = *itr;
            if(p.second > m1){
                m2 = m1;
                st2=st1;
                m1=p.second;
                st1=p.first;
            }else if(m2 < p.second){
                m2 = p.second;
                st2 = p.first;
            }
        }
        return st2;
    }
};
