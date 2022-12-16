class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string temp ="";
        temp += S[0];
        for(int i=1; i<S.size(); i++)
        {
            if(S[i] != S[i-1])
                temp += S[i];
        }
        return temp;
        // code here.
    }
};
