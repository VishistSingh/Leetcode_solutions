class Solution {
public:
 int dx[4]={-1,1,0,0};
 int dy[4]={0,0,-1,1};
int mini=0;
    int orangesRotting(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid[0].size();
     
     queue<pair<int,int>> que;
     int fresh=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        if(grid[i][j]==2)
        que.push({i,j});
        else if(grid[i][j]==1)
        fresh++;
        else
        continue;
    }
  }
  if(fresh==0)
  return 0;
      

      while(!que.empty())
      {
        int sz=que.size();
        bool rotten=false;

        for(int k=0;k<sz;k++)
        { 
            auto[i,j]=que.front();
            que.pop();
            for(int d=0;d<4;d++)
            {
                int ni=i+dx[d];
                int nj=j+dy[d];

                if(ni>=0&&ni<n&&nj>=0&&nj<m&&grid[ni][nj]==1)
                {
                    grid[ni][nj]=2;
                    que.push({ni,nj});

                    fresh--;
                rotten=true;
                }
            }
        }
        if(rotten) mini++;
      }
      return fresh==0?mini:-1;
    }

};
      