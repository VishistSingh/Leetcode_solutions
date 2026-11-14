class Solution {
public:
int solve(int index,vector<int> &nums,vector<int> &memo)
{
    if(index==0)
    return memo[index]=nums[index];

    if(index<0)
    return 0;

    if(memo[index]!=-1)
    return memo[index];

    int take=nums[index]+solve(index-2,nums,memo);
    
    int nottake=0+solve(index-1,nums,memo);

    return memo[index]=max(take,nottake);
}

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> memo(n+1,-1);

        return solve(n-1,nums,memo);

    }
};