class Solution {
public:
    bool cond(vector <string>& strs, int n){
        bool val = true;
        for(int i=0; i<strs.size()-1; i++){
            if(strs[i].size() <= n || strs[i+1].size() <= n){
                val = false;
                return val;
            }
            if(strs[i][n] != strs[i+1][n]){
                val = false;
                return val;
            }
        }
        return val;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        if (strs.size() == 1){
            return strs[0];
        }
        string temp ="";
        int n=0; 
        while(cond(strs, n)){
            temp += strs[0][n];
            ++n;
        }
        return temp;
        
    }
    /*
    if (strs.empty()){
        return "";
    }

    if (strs.size() == 1)
    {
        return strs[0];
    }

    string firstStr = strs[0];
    vector<char> vectorFirstStr;
    for (int i = 0; i < firstStr.length(); i++)
    {
        vectorFirstStr.push_back(firstStr[i]);
    }

    vector<char> resultVec;

    for (int i = 0; i < vectorFirstStr.size(); i++)
        for (int j = 1; j < strs.size(); j++)
        {
            string temp = strs[j];
            if (vectorFirstStr[i] != temp[i])
            {
                string resultString;
                for (int i = 0; i < resultVec.size(); i++)
                {
                    resultString += resultVec[i];
                }
                return resultString.empty() ? "" : resultString;
            }
            if (vectorFirstStr[i] == temp[i] && j == strs.size() - 1 )
            {
                resultVec.push_back(temp[i]);
            }
        }

    string resultString;
    for (int i = 0; i < resultVec.size(); i++)
    {
        resultString += resultVec[i];
    }
    return resultString.empty() ? "" : resultString;
    }*/
};
