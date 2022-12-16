class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size())
            return false;
        
        map <char, char> mp;
        for(int i=97; i<123; i++)
            mp[i] = '!';
        for(int i=0; i<str1.size(); i++){
            if(mp[str1[i]] == '!'){
                mp[str1[i]] = str2[i];
                for(int j=97; j<123; j++){
                    if(char(j) != str1[i] && mp[j] == mp[str1[i]])
                        return false;
                }
            }
            else if(mp[str1[i]] == str2[i]){
                
            }else{
                return false;
            }
        }
        return true;
        
    }
};
