string printSequence(string S)
{
    map<char, string> mp;
    int i = 2;
    for(char c = 'A'; c <= 'Z'; c++){
        string s = ""; 
        s += to_string(i);
        mp[c] = s;
        c++;
        s += to_string(i);
        mp[c] = s;
        c++;
        s += to_string(i);
        mp[c] = s;
       
        if(c == 'R' || c == 'Y'){
            c++;
            s += to_string(i);
            mp[c] = s;
        }
        i++;
    } 
    
    string ans = "";
   
    for(char c: S){
        if(c == ' ')
            ans += "0";
        else
            ans += mp[c];
    }
    return ans;
    /*string ans ="";
    for(int i=0; i< S.size(); i++){
        if(S[i] == 'Z')
            ans += "9999";
        int r = S[i] - 'A';
        int ch = r/3 + 2;
        for(int j=0; j<=r%3; j++){
            ans += to_string(ch);
        }
    }
    return ans;*/
}
