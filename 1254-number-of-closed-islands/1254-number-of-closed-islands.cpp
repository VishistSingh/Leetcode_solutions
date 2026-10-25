class Solution {
public:
int n,m;
int count=0;
bool dfs(vector<vector<int>>& grid,int i,int j)
{
    
    if(i<0||i>=n||j<0||j>=m)
    return false;
    
    if(grid[i][j]==1)
     return true;
    
    grid[i][j]=1;

    bool up =dfs(grid,i-1,j);
    bool down=dfs(grid,i+1,j);
    bool left=dfs(grid,i,j-1);
    bool right=dfs(grid,i,j+1);
    
    return up&&down&&left&&right;
}
    int closedIsland(vector<vector<int>>& grid) {
     n=grid.size();
     m=grid[0].size();

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==0)
            {
            if(dfs(grid,i,j))
            count++;
            }
        }
     }
     return count;    
    }
};