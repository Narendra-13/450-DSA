class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
        /*if(s1[0] == '-'){
            s1 = s1.substr(1);
        }
        long double n1 = stoi(s1);
        if(s2[0] == '-'){
            s2 = s2.substr(1);
        }
        long double n2 = stoi(s2);
        n1 = n1*n2;
        ostringstream str1;
        str1 << n1;
        string temp = str1.str();
        return temp;*/
        bool p1 = false;
        bool p2 = false;
       
        if(s1[0] == '-'){
            p1 = true;
            s1 = s1.substr(1);
        }
        if(s2[0] == '-'){
            p2 = true;
            s2 = s2.substr(1);
        }
       
        int x = 0;
        while(x < s1.size() && s1[x] == '0'){
            x++;
        }
        if(x != 0){
            s1 = s1.substr(x);
        }
       
        int y = 0;
        while(y < s2.size() && s2[y] == '0'){
            y++;
        }
        if(y != 0){
            s2 = s2.substr(y);
        }
       
       
        int n = s1.size();
        int m = s2.size();
       
        if(n == 0 || m == 0)
            return "0";
       
        vector<int> store(n+m, 0);
        for(int i = n-1; i >= 0; i--){
            for(int j = m-1; j >= 0; j--){
                int mul = (s1[i]-'0')*(s2[j]-'0');
                int l = i+j;
                int r = i+j+1;
                int sum = mul + store[r];
                store[l] += sum/10;
                store[r] = sum%10;
            }
        }
       
        string ans;
        for(int i = 0; i < n+m; i++){
            if(i == 0 && store[0] == 0)
                continue;
            ans += to_string(store[i]);
        }
       
        if(p1^p2) {
            return "-" + ans;
        } else{
            return ans;
        }
    }
};
