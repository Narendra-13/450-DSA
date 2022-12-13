class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
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
};
