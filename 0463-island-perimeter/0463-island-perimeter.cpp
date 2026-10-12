class Solution {
public:
int perimeter=0;

void dfs(vector<vector<int>>& grid,int i,int j)
{
    int row=grid.size();
      int col=grid[0].size();

      if(i<0||i>=row||j<0||j>=col||grid[i][j]==0)
      {
      perimeter++;
      return ;
      }

      if(grid[i][j]==-1)
      return;
      
      grid[i][j]=-1;

      dfs(grid,i+1,j);
        dfs(grid,i-1,j);

    dfs(grid,i,j+1);

    dfs(grid,i,j-1);
}
    int islandPerimeter(vector<vector<int>>& grid) {
      int row=grid.size();
      int col=grid[0].size();
      
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
            if(grid[i][j])
            {
                dfs(grid,i,j);
                break;
            }
        }
      }
      return perimeter;
    }
};