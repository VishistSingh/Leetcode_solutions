class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int m=t.size();
        int cost=0;
        int l=0,r=0;
        int maxi=INT_MIN;
       while(r<n)
       {
        cost=cost+abs(s[r]-t[r]);

        while(cost>maxCost)
        {
            cost=cost-abs(s[l]-t[l]);
            l++;
        }
        maxi=max(maxi,r-l+1);

        r++;
       }
      return maxi;
    }
};