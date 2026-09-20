class Solution {
public:
    int minAddToMakeValid(string s) {
      int count1=0,count2=0;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='(')
          count1++;
          else
          {
            if(count1==0)
            {
                count2++;
            }
            else
            count1--;
          }
      }
    return count1+count2;
    }
};