int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    vector <int> vec;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            vec.push_back(mat[i][j]);
        }
    }
    sort(vec.begin(), vec.end());
    return vec[k-1];
}
