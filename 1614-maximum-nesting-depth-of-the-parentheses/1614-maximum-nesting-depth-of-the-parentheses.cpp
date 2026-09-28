class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi=0,count=0;
        if(s.size()==1)
        return 0;
        if(s[0]=='('&& s.size()==1)
        return 1;
    
        for(int i=0;i<s.size();i++)
        {   

            if(s[i]=='(')
            {
                st.push(s[i]);
                count++;
                maxi=max(count,maxi);
            }
            else if(!st.empty()&& s[i]==')')
            {
            count--;
            st.pop();
            }
        }
      
        return maxi;


    }
};