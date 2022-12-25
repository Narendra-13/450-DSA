vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    long long int j=0;
    vector <long long> B(N-K+1);
    queue <long long int > q;
    for(long long int i=0; i<N; i++){
        if(A[i] < 0){
            q.push(i);
        }
    }
    for(long long int i=0; i<= N-K; i++){
        if(!q.empty() && q.front()<i){
            q.pop();
        }
        if(!q.empty() && q.front()<i+K){
            B[i] = A[q.front()];
        }else{
            B[i] = 0;
        }
    }
    return B;
    /*int i = 0, size = 0, n_i = 0;
    vector<long long> v;
    queue<long long> q;
    for(int j = 0; j < N; j++)
    {
        if(A[j] < 0)
            q.push(A[j]);
        size++;
        if(size > K)
        {
            size--;
            if(A[i] == q.front())
                q.pop();
            i++;
        }
        if(size == K)
        {
            if(q.empty())
                v.push_back(0);
            else
                v.push_back(q.front());
        }
    }
    return v;*/
 }
