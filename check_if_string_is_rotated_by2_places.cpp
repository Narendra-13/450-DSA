class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        /*string str3 = str1;
        //  temp1, temp2;
        auto temp1 = str1[0];
        auto temp2 = str1[1];
        for(int i=0; i<(str1.size()-2); i++)
            str1[i] = str1[i+2];
        str1[str1.size()-2] = temp1;
        str1[str1.size()-1] = temp2;
        if(str1 == str2)
            return 1;
        
        temp1 = str3[str3.size() -1];
        temp2 = str3[str3.size() -2];
        for(int i=2; i<str3.size(); i++)
            str3[i] = str3[i-2];
        str3[1] = temp1;
        str3[0] = temp2;
        if(str1 == str2)
            return 1;
        return 0;
        
        // temp1 = str*/
        
        int n = str1.size();
        string s = str1;

         reverse(str1.begin(), str1.end());
         reverse(str1.begin(), str1.end() -2);
         reverse(str1.end()-2, str1.end());

         reverse(s.begin(), s.end());
         reverse(s.begin(), s.begin()+2);
         reverse(s.begin()+2, s.end());

         return str1 == str2 || s == str2;
        
    }
};
