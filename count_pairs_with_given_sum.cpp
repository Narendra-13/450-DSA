class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        /*int count =0;
        vector<int> news;
        for(int i=0; i<n; i++){
            news.at(i) = arr[i];
        }
        sort(news.begin(), news.end());
        int i=0, j= n-1;
        while(i<j){
            int sum =0;
            sum = (news.at(i)+news.at(j));
            if(sum == k){
                count++;
                if(news.at(i+1) == news.at(i)){
                    i++;
                }else if(news.at(j-1) == news.at(j)){
                    j--;
                }else{
                    i++;
                }
            }else if(sum > k){
                j--;
            }else if(sum < k){
                i++;
            }
        }
        return count;*/
        map<int,int>A;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int no=k-arr[i];
            if(no>0)
            {
                if(A.find(no)!=A.end())
                {
                    ans+=A[no];
                }
                A[arr[i]]++;
            }
        }
        return ans;
    }
};
