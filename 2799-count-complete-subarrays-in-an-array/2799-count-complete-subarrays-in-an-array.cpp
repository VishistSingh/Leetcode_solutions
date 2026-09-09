class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int n=nums.size();
        map<int,int> mp;
    int l=0,ans=0;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            while(mp.size()==s.size())
            {
                ans+=n-i;
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                {
                mp.erase(nums[l]);
                }

                l++;
            }
           
        }  
        return ans;   
    }
};