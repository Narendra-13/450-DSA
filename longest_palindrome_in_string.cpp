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
    string longestPalin (string S) {
        string org = S;
        string str = "";
        string pal = "";
        int count = 0;
        for(int i=0; i<S.size() && (S.size() - i) > pal.size(); i++){
            for(int j=0; (i+j)<=S.size(); j++){
                str = org.substr(i, j);
                if(isPal(str) && (str.size() > pal.size())){
                    pal = str;
                }
                str.clear();
            }
        }
        return pal;
        
    }*/
    string longestPalin (string S) {
        int low, high;
        int start =0, lenofsubstring = 1; //
        for(int i=1; i<S.size(); i++){
            low = i-1;
            high = i;
            while(low>=0 && high<S.size() && S[low]==S[high]){
                if(lenofsubstring<high-low+1){
                    start = low;
                    lenofsubstring = high-low+1;
                }
                low--; high++;
            }
            low = i-1;
            high = i+1;
            while(low>=0 && high<S.size() && S[low]==S[high]){ //if length of string is odd
                if(lenofsubstring<high-low+1){
                    start = low;
                    lenofsubstring = high-low+1;
                }
                low--; high++;
            }
        }
        return S.substr(start,lenofsubstring);
    }
};
