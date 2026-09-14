class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
      unordered_map<char,int> mp;
      unordered_map<string,int> m;
      int l=0,maxi=0;
      for(int r=0;r<s.size();r++)
      {       
        mp[s[r]]++;
        if(r-l+1>minSize)
        {
           mp[s[l]]--;
           if(mp[s[l]]==0)
           mp.erase(s[l]);

           l++;
        }

        if(r-l+1==minSize && mp.size()<=maxLetters)
        {
            string str=s.substr(l,r-l+1);
            m[str]++;

            if(m.count(str))
            maxi=max(maxi,m[str]);

          
        }
      }
      return maxi;

    }
};