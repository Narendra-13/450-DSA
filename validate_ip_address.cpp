class Solution {
    public:
        int isValid(string s) {
            if(s.size() < 7 || s.size() > 15)
                return 0;
            string temp ="";
            int count = 0;
            for(int i=0; i<s.size(); i++){
                if(s[i] != '.')
                    temp += s[i];
                else{
                    count++;
                    if(count > 3)
                        return 0;
                    int n = temp.length();
                    if(temp[0] == '0' && n>1)
                        return 0;
                    if(n<=0 || n>3)
                        return 0;
                    for(int j=0; j<temp.size(); j++){
                        if(isalpha(temp[j]))
                            return 0;
                    }
                    int p = stoi(temp);
                    if(p<0 || p>255)
                        return 0;
                    temp ="";
                }
            }
            if(count == 3){
                int n = temp.length();
                if(temp[0] == '0' && n>1)
                    return 0;
                if(n<=0 || n>3)
                    return 0;
                int p = stoi(temp);
                if(p<0 || p>255)
                    return 0;
            }
            return 1;
        }
};
