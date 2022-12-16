class Solution{
  public:		
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
};
