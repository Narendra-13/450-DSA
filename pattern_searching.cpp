class Solution{
public:	
	
	int search(string text, string pat)
	{
	    if(text.size() < pat.size())
	        return 0;
	    else if (text.size() == pat.size()){
	        if(text == pat)
	            return 1;
	        else
	            return 0;
	    }
	    
	    for(int i=0; i<= text.size()-pat.size(); i++){
	        if(text[i] == pat[0])
	        {
	            bool val = true;
	            for(int j=0; j<pat.size(); j++){
	                if(text[i+j] != pat[j]){
	                    val = false;
	                    break;
	                }
	                   // break;
	            }
	            if(val == true)
	                return 1;
	        }
	    }
	    return 0;
	    
	}
};
