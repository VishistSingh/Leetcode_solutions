class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int, int> mp;

        long long sum = 0;
        long long maxi = 0;
        int l = 0;

        for (int i = 0; i < nums.size(); i++) {

            mp[nums[i]]++;
            sum += nums[i];

            if (i - l + 1 > k) {
                sum -= nums[l];
                mp[nums[l]]--;

                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }

                l++;
            }

            if (i - l + 1 == k) {

                if (mp.size() == k) {
                    maxi = max(maxi, sum);
                }
            }
        }

        return maxi;
    }
};