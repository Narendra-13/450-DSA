class Solution {
	public:
		string FirstNonRepeating(string A){
		   unordered_map<char,int> mp;
            string str="";
            int i=0;
            for(int j=0;j<A.size();j++){
                mp[A[j]]++;
                if(mp[A[i]]>=2){
                    while(i<=j && mp[A[i]]>=2){
                        i++;
                    }
                    if(i>j) str+="#";
                    else str+=A[i];
                }
                else{
                    str+=A[i];
                }
            }
            return str;
		}
};
