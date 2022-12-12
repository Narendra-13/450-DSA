class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    bool pal = true;
	    for(int i=0; i<S.size()/2; i++){
	        if(S[i] != S[S.size() -1 -i]){
	            pal = false;
	            break;
	        }
	    }
	    if(pal){
	        return 1;
	    }else{
	        return 0;
	    }
	}
};
