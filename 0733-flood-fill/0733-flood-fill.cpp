class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     int n=image.size();
     int m=image[0].size();
      
      int oldc=image[sr][sc];
      if(oldc==color)
      return image;

     queue<pair<int,int>> q;
     q.push({sr,sc});
     image[sr][sc]=color;
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};

     while(!q.empty())
     {
        int i=q.front().first;
        int j=q.front().second;

        q.pop();

        for(int k=0;k<4;k++)
        {
            auto ni=i+dx[k];
            auto nj=j+dy[k];

            if(ni>=0 && ni<n && nj>=0&&nj<m&&image[ni][nj]==oldc)
            {
            image[ni][nj]=color;
            q.push({ni,nj});
            }
        }

   }
   return image;
    }
};