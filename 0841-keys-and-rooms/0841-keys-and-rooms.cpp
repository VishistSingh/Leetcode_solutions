class Solution {
public:
void dfs(int curr,vector<vector<int>> &rooms,vector<bool> &vis)
{
    vis[curr]=1;
    for(auto x: rooms[curr])
    {
        if(vis[x]==0)
        {
            dfs(x,rooms,vis);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,0);

       dfs(0,rooms,vis);
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i]==0)
            return 0;
        }
        return 1;
    }
};