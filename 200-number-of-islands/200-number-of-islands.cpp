void dfs(int i, int j, vector<vector<char>>&grid,int n, int m)
{
    if(i<0 ||i>=n || j<0|| j>=m||grid[i][j]!='1')
        return;
    
    grid[i][j]='2';
    
    dfs(i,j-1,grid,n,m);
    dfs(i,j+1,grid,n,m);
    dfs(i-1,j,grid,n,m);
    dfs(i+1,j,grid,n,m);
}

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(i,j, grid,n,m);
                }
            }
        }
        return count;
    }
};