class Solution
{
    public:
    int transform (string A, string B)
    {
        int s1 = 0, s2 = 0, m = A.length(), n = B.length();
        
        if(m != n)
            return -1;
        int arr[70], brr[70];
        memset(arr, 0, sizeof(arr));
        memset(brr, 0, sizeof(brr));
        for(int i=0; i<A.size(); i++){
            arr[A[i] - 65]++;
        }
        for(int i=0; i<B.size(); i++){
            brr[B[i] - 65]++;
        }
        for(int i=0; i<70; i++){
            if(arr[i] != brr[i])
                return -1;
        }
        
        int i = m-1, j = n-1, c =0;
        while(i >= 0 && j >= 0){
            if(A[i] == B[j]){
                i--;
                j--;
            }else{
                c++;
                i--;
            }
        }
        return c;
        
        /*stack <char> as;
        stack <char> bs;
        stack <char> sft;
        int count =0;
        for(int i=0; i<A.size(); i++)
            as.push(A[i]);
        for(int i=0; i<B.size(); i++)
            bs.push(B[i]);
        while(!bs.empty()){
            if(!as.empty() && as.top() == bs.top()){
                as.pop();
                bs.pop();
            }else if(!as.empty() && sft.empty()){
                while(as.top() != bs.top()){
                    sft.push(as.top());
                    as.pop();
                    if(as.empty()){
                        return -1;
                    }
                }
                
            }else{
                if(sft.top() == bs.top()){
                    count += bs.size();
                    sft.pop();
                    bs.pop();
                }else{
                    while(!sft.empty()){
                        as.push(sft.top());
                        sft.pop();
                        count++;
                    }
                }
            }
        }
        return count;*/
    }
};
