class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
     int median=nums[n/2];
     int move=0;

     for(int x:nums)
     {
      move+=(abs(x-median));
     }
return move;

    }
};