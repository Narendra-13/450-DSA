class Solution 
{
    public:
    static bool myfunction(Job s1, Job s2)
    {
        return (s1.profit > s2.profit);
    }
   
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, myfunction);
        // Arrays.sort( arr , (Job j1 , Job j2)->(int)(j2.profit - j1.profit ) );
        // int *table = new int[n];
        int maxdead = 0;
        for(int i=0; i<n; i++){
           maxdead = max(maxdead, arr[i].dead); 
        }
        int prof = 0, count = 0;
        int cnt[maxdead];
        memset(cnt, 0, sizeof(cnt));
        for(int i=0; i<n; i++){
            if(cnt[arr[i].dead-1] == 1 ){
                int j = arr[i].dead-2;
                while(j>=0){
                    if(cnt[j] == 0){
                        count++;
                        cnt[j] = 1;
                        prof += arr[i].profit;
                        break;
                    }
                    j--;
                }
            }else{
                count++;
                cnt[arr[i].dead-1] = 1;
                prof += arr[i].profit;
            }
        }
        vector <int> vec;
        vec.push_back(count);
        vec.push_back(prof);
        return vec;
    }
};
