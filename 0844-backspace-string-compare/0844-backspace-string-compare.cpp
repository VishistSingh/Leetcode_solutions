class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        string str,b;

        for(int i=0;i<s.size();i++)
        {
            if(!a.empty()&&s[i]=='#')
            a.pop();

            else
            {  
                if(s[i]=='#')
                continue;
                else

                a.push(s[i]);
            }
        }
        while(!a.empty())
        {
            str+=a.top();
            a.pop();
        }

        for(int i=0;i<t.size();i++)
        {
            if(!a.empty()&&t[i]=='#')
            a.pop();

            else
            {
                if(t[i]=='#')
                continue;
                else

                a.push(t[i]);
            }
        }
        while(!a.empty())
        {
            b+=a.top();
            a.pop();
        }
         return str==b;
    }
};