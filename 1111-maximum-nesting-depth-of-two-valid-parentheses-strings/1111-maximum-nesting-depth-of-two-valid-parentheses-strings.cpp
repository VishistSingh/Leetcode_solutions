class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int n=s.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            st.push(i);
            
            else 
            {
                if(i%2==0){
                ans[i]=1;
                ans[st.top()]=1;
                st.pop();
                }
                else
                 {
                     ans[i]=0;
                     ans[st.top()]=0;
                     st.pop();
                 }
            }
        }
        return ans;
    }
};