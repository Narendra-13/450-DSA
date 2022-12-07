class Solution
{
  public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int> vec;
            while(i < n1 and j < n2 and k < n3)
            {
                if(A[i] == B[j] and C[k] == A[i])
                {
                    vec.push_back(A[i]);
                    i++; j++; k++;
                }
                else if(A[i] < B[j])
                    i++;
                else if(B[j] < C[k])
                    j++;
                else
                    k++;
            
            }
            auto last = unique(vec.begin(), vec.end());
            vec.erase(last, vec.end());
            return vec;
        }   
};
