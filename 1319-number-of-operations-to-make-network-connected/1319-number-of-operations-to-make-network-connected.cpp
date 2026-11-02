class Solution {
public:
void dfs(int curr,vector<vector<int>> &adj,vector<int>& vis)
{
    vis[curr]=1;
    for(auto x:adj[curr])
    {
        if(vis[x]==0)
        {
            dfs(x,adj,vis);
        }
    }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
     int  component=0;
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }

        vector<int> vis(n,0);

        for(int i=0;i<n;i++)
        {
          if(vis[i]==0)
          {
            component++;
            dfs(i,adj,vis);
          }
        }
        if(connections.size()>=n-1)
        {
            return component-1;        }
    else 
    return -1;
    }
};