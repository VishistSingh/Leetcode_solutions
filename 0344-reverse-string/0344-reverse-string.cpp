class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
        int index=0;
        while(!st.empty())
        {
            s[index]=st.top();
            st.pop();
            index++;
        }
    }
};