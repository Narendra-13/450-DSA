class Solution{
  public:
    bool isAnagram(string a, string b){
        int arr[26], brr[26];
        memset(arr, 0, sizeof(arr));
        memset(brr, 0, sizeof(brr));
        for(int i=0; i<a.size(); i++){
            arr[a[i] - 97]++;
        }
        for(int i=0; i<b.size(); i++){
            brr[b[i] - 97]++;
        }
        for(int i=0; i<26; i++){
            if(arr[i] != brr[i])
                return false;
        }
        return true;
    }
    
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector <vector <string> > vec;
        vector <string> temp;
        temp.push_back(string_list[0]);
        vec.push_back(temp);
        temp.clear();
        int n = string_list.size();
        for(int i=1; i<n; i++){
            int j=0;
            for(; j<vec.size(); j++){
                if(isAnagram(string_list[i], vec[j][0])){
                    vec[j].push_back(string_list[i]);
                    break;
                }
            }
            if(j==vec.size()){
                temp.push_back(string_list[i]);
                vec.push_back(temp);
                temp.clear();
            }
            
        }
        return vec;
    }
};
