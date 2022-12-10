class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        /*// vector
        int count = 0;
        vector <int> vec;
        for(int i=0; i<n; i++){
            // if
            vec.push_back(X-A[i]);
        }
        for(int j=0; j<vec.size(); j++){
            map<int,int>B;
            int ans=0;
            for(int i=0;i<n;i++)
            {
                if(i==j){
                    continue;
                }
                int no = vec[j]-A[i];
                if(no>0)
                {
                    if(B.find(no)!=B.end())
                    {
                        ans+=B[no];
                    }
                B[A[i]]++;
                }
            }
            count = count + ans;
        }
        return count;*/

        if(n<3){
            return false;
        }

        sort(A,A+n);
        int i,l,r;
        for(int i=0;(i+2)<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int res=A[i]+A[l]+A[r];
                if(res==X){
                    return true;
                }else if(res>X){
                    r=r-1;
                }else{
                    l=l+1;
                }
            }
        }
        return false;
    }
};
