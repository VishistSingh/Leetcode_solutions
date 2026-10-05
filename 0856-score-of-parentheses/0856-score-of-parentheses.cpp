class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0,d=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(')
           ++d;
           else
           {
            --d;
            if(s[i-1]=='(')
            {
                score+=pow(2,d);
            }
           }
    }
    return score;
    }
};