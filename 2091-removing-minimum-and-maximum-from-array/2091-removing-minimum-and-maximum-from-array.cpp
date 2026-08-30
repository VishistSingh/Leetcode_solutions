class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n =nums.size();
        int minindex=min_element(begin(nums),end(nums))-begin(nums);
        int maxiindex=max_element(begin(nums),end(nums))-begin(nums);

        int left=min(minindex,maxiindex);
        int right=max(minindex,maxiindex);

        return min({left+1 + n-right, right+1 , n-left});    
    }
};