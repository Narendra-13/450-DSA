class Solution{
  public:
    
    bool check(string s)
    {
        int n = s.length();
        if(n <=0 || n> 3)
            return false;
        if(s[0] == '0' && n>1)
            return false;
        int p = stoi(s);
        if(p<0 || p>255)
            return false;
        return true;
        
    }
    
    string generate(string &s, int n, int i, int j,int k)
    {
        string s1 = s.substr(0, i+1);
        string s2 = s.substr(i+1, j-i);
        string s3 = s.substr(j+1, k-j);
        string s4 = s.substr(k+1, n-1-k);
        if(check(s1) && check(s2) && check(s3) && check(s4))
            return s1 + "." + s2 + "." + s3 + "." + s4;
        return "";
    }
    
    vector<string> genIp(string &s) {
        vector <string> ans;
        int n = s.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    string st = generate(s, n, i, j, k);
                    if(st.size() > 0){
                        ans.push_back(st);
                    }
                }
            }
        }
        return ans;
    }
    // return ans;
};
