class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    /*bool isPres(string str, string p){
        int arr[26], brr[26];
        memset(arr, 0, sizeof(arr));
        memset(brr, 0, sizeof(brr));
        for(int i=0; i<p.size(); i++)
            arr[p[i] - 97]++;
        for(int i=0; i<str.size(); i++)
            brr[str[i] - 97]++;
        for(int i=0; i<26; i++){
            if(brr[i] < arr[i])
                return false;
        }
        return true;
    }*/
    string smallestWindow (string s, string p)
    {
        unordered_map<char, int> mp;
        for(auto &e : p){
            mp[e]++;
        }
        int n = s.length();
        int cnt = 0;
        int i = 0;
        int ans = INT_MAX;
        int startIndex = n;
        int endIndex = 0;
        for(int j = 0; j < n; j++){
            if(mp.count(s[j])){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    cnt++;
                }
            }
            while(cnt == mp.size() && i <= j){
                if(ans > j - i + 1){
                    startIndex = i;
                    endIndex = j;
                    ans = j - i + 1;
                }
                if(mp.count(s[i])){
                    mp[s[i]]++;
                    if(mp[s[i]] > 0){
                        cnt--;
                    }
                }
                i++;
            }
        }
        string resultString = "";
        for(int i = startIndex; i <= endIndex; i++){
            resultString += s[i];
        }
        return ans == INT_MAX ? "-1" : resultString;
        
        /*unordered_map <char, int> mp;
        for(auto c : p)
            mp[c]++;
        int count = mp.size();
        int i = 0;
        int n = s.size();
        string glob = "", loc ="";
        int glob_m = INT_MAX, loc_m =0;
        int head =0, tail =0;
        while(tail<n){
            loc_m = head-tail+1;
            loc = s.substr(tail, loc_m);
            if(i<n){
                if(i<count && head != n-1){
                    mp[head]--;
                    if(mp[head] == 0){
                        i++;
                        //  head++;
                    }
                    if(i==count){
                    // tail--;
                        // loc_m = head-tail+1;
                        if(loc_m < glob_m){
                            glob_m = loc_m;
                            glob = loc;
                        }
                    }else{
                        head++;
                    }
                }else if(i==count || head == n-1){
                    mp[tail]++;
                    if(mp[tail] == 1){
                        // tail--
                        i--;
                        head++;
                    }else{
                        loc_m = head-tail+1;
                        if(loc_m < glob_m){
                            glob_m = loc_m;
                            glob = loc;
                        }
                    }
                    tail++;
                }
            }
        }
        return glob;
    }*/
        // Your code here
    }
};
