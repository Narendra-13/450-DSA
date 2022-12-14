class Solution
{
public:
    bool searc(string A, int i, vector <string> &B){
        string temp = "";
        if(i== A.length())
            return true;
        while(i<A.length()){
            temp += A[i++];
            if(find(B.begin(), B.end(), temp) != B.end() && searc(A, i, B)){
                return true;
            }
            // return false;
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        // string str = A;
        /*int count = A.size();
        int i=1;
        int req =0;
        while(i<count){
            if(find(B.begin(), B.end(), A.substr(req, i)) != B.end()){
                count = count - i;
                req += i;
                i=0;
            }else{
                str = A;
                i++;
            }
        }
        if(count == 0)
            return 1;
        else
            return 0;*/
        if(searc(A, 0, B))
            return 1;
        else
            return 0;
    }
};
