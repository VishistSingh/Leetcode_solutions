class Solution {
public:
void dfs(int curr,vector<vector<int>> &adj,vector<int> &vis)
{

    vis[curr]=1;
    for(auto x: adj[curr])
    {
        if(vis[x]==0)
        {
            dfs(x,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int total=0;
         int n=isConnected.size();
         int province=0;
                 vector<int> vis(n,0);


          vector<vector<int>> adj(n,vector<int> (n));

          for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
                if(i!=j && isConnected[i][j]==1 )
                {
                    adj[i].push_back(j);
                }
            }
          }

          for(int i=0;i<n;i++)
          {
             if(vis[i]==0)
             {
                province++;
                dfs(i,adj,vis);
             }
          }

          return province;

    }
};