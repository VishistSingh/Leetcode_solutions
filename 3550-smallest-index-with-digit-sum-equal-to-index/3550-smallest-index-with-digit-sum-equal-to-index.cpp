class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX,in=0;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int sum=0;
            while(num!=0)
            {
                sum+=num%10;
                num/=10;
            }
            if(sum==i)
            {
                mini=min(mini,i);
                in=1;
            }
        }
        if(in)
        return mini;
        else return -1;
    }
};