class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        
        long long moves=INT_MAX;
       for(int i=0;i<n;i++)
      {
         int first=nums[i];
        long long incre=0,decre=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]==first)
            {
                continue;
            }  

            else if(first<nums[j])
            incre+=nums[j]-first;
            
            else
            decre+=first-nums[j];

        }
        moves=min(moves,incre+decre);
      }
      return moves;
    }
};