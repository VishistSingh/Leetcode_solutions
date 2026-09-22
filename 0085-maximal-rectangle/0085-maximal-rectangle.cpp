class Solution {
public:
int ans=0;

void find(vector<int> heights)
{
    int n=heights.size();       
        stack<int> st;
        for(int i=0;i<n;i++)
        {
           while(!st.empty() && heights[st.top()]>heights[i])
           {
            int index=st.top();
            st.pop();
            if(!st.empty())
            {
                ans=max(ans,heights[index]*(i-st.top()-1));
            }
            else
            ans=max(ans,heights[index]*i);
           }
           st.push(i);
         }
         while(!st.empty())
         {
            int index=st.top();
            st.pop();
             if(!st.empty())
            {
                ans=max(ans,heights[index]*(n-st.top()-1));
            }
            else
            ans=max(ans,heights[index]*n);
           }
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> heights(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]=='1')
                {
                    heights[j]++;
                }
                else
                heights[j]=0;
            }
            find(heights);
        }
        return ans;
    }
};