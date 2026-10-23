class Solution {
public:
int n;
int m;
int dr[4]={-1,1,0,0};
int dc[4]={0,0,-1,1};
  void dfs(vector<vector<int>> &image,int r,int c,int old,int color)
  {
    image[r][c]=color;

    for(int i=0;i<4;i++)
    {
        int newr=r+dr[i];
        int newc=c+dc[i];

        if(newr>=0 && newr<n && newc>=0 && newc<m && image[newr][newc]==old)
        {
            dfs(image,newr ,newc,old,color);
        }
    }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n=image.size();
        m=image[0].size();

        int old=image[sr][sc];

        if(old==color)
        return  image;

        dfs(image,sr,sc,old,color);

        return image;

    }
};