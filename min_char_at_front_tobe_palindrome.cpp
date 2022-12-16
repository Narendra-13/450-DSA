class Solution {
public:
    
    /*bool isPal(string S){
        for (int i = 0; i < S.length() / 2; i++) {
            if (S[i] != S[S.length() - i - 1]) {
                return 0;
            }
        }
        return 1;
    }
    
    int minChar(string str){
        int count =0;
        // string new_one = str;
        int n= str.size();
        while(n>=0){
            if(isPal(str)){
                return count;
                break;
            }else{
                count++;
                str.pop_back();
            }
            n--;
        }
        return count;
    }*/
    int lps(string s) {
	    int n = s.length();
	    int lpa[n];
	    lpa[0] = 0;
	    int len = 0;
	    int i=1;
	    while(i<n){
	        if(s[i] == s[len]){
	            len++;
	            lpa[i] = len;
	           // len++;
	            i++;
	        }else{
	            if(len != 0){
	                len = lpa[len-1];
	            }else{
	                lpa[i] = 0;
	                i++;
	            }
	        }
	    }
	    return lpa[n-1];
	}
    int minChar(string str){
        string temp ="";
        for(int i=str.size()-1; i>=0; i--)
            temp += str[i];
        string req = str + "$" + temp;
        return str.size() - lps(req);
    }
};
