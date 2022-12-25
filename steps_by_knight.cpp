class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    queue < pair<int, int>> q;
	    pair <int, int> start, end;
	    start = {KnightPos[0], KnightPos[1]};
	    int vis[N+1][N+1];
	    memset(vis, 0, sizeof(vis));
	    vis[KnightPos[0]][KnightPos[1]] = 1;
	    q.push(start);
	    int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
	    int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};
	    int level = 0;
	    if(KnightPos[0] == TargetPos[0] && KnightPos[1] == TargetPos[1]){
	        return 0;
	    }
	    
	    while(!q.empty()){
	       // level++;
	        for(int i=0; i<q.size(); i++){
	            int r = q.front().first;
	            int c = q.front().second;
	            q.pop();
	            for(int j=0; j<8; j++){
	                int rn = r + dx[j];
	                int rc = c + dy[j];
	                if(rc > 0 && rc <=N && rn >0 && rn <=N && vis[rn][rc] == 0){
	                    q.push({rn, rc});
	                    vis[rn][rc] = vis[r][c] + 1;
	                    if(rn == TargetPos[0] && rc == TargetPos[1]){
	                        return vis[rn][rc]-1;
	                    }
	                }
	            }
	        }
	    }
	    return vis[TargetPos[0]][TargetPos[1]]-1;
	    
	}
};
