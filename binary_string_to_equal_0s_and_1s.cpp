class Solution {
public:
    int maxSubStr(string str){
        int zeros = 0;
        int ones = 0;
        int count = 0;

        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
                zeros++;
            if(str[i]=='1')
                ones++;
            if(zeros == ones)
            {
                count++;
            }
        }
        if(zeros != ones) 
            return -1;
        return count;
    }
};
