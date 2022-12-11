class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        /*vector < int> pass;
        int col = c-1, col_b = 0;
        int row = r-1, row_b = 0;;
        while(row_b <= row){
            //First row
            for(int j=col_b; j <= col;j++){
                // cout<<matrix[row_b][j]<<" ";
                pass.push_back(matrix[row_b][j]);
            }
            if(row_b != row ){
            //for last column
            for(int k=(row_b+1); k< row; k++){
                // cout<<matrix[k][col]<<" ";
                pass.push_back(matrix[k][col]);
            }
            //Last row
            if(col_b!= col){
            for(int l= col; l >= col_b; l--){
                // cout<<matrix[row][l]<<" ";
                pass.push_back(matrix[row][l]);
            }
            }
            
            for(int m=row-1; m>row_b; m--){
                // cout<<matrix[m][col_b]<<" ";
                pass.push_back(matrix[m][col_b]);
            }
            
            }
            row--;
            row_b++;
            col--;
            col_b++;
            
        }
        return pass;*/
        int left=0;
        int right=c-1;
        int top=0;
        int bottom=r-1;
        vector<int> res;

        while(left <= right && top <= bottom)
        {
            for(int i=left; i <= right; i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top; i <= bottom; i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i=right; i >= left; i--){
                    res.push_back(matrix[bottom][i]);
                }
            bottom--;
            }

            if(left <= right){
                for(int i=bottom; i >= top; i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};
