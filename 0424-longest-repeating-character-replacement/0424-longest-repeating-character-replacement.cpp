class Solution {
public:
    int characterReplacement(string s, int k) {
  vector<int> count(26,0);

        int l=0;
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'A']++;
            maxi=max(count[s[i]-'A'],maxi);

            if((i-l+1)-maxi>k)
            {
            count[s[l]-'A']--;
            l=l+1;
            }
        }
        return s.size()-l;
        
    }
};