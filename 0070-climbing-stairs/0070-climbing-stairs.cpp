class Solution {
public:
int find(int n,vector<int> &memo)
{

        if(n==1)
        return memo[n]=1;

        if(n==0)
        return memo[n]=1;
       if(memo[n]!=-1)
       return memo[n];
       return memo[n]=find(n-1,memo)+find(n-2,memo);
}
    int climbStairs(int n) {
        // vector<int> dp(n+1);
        vector<int> memo(n+1,-1);

        return find(n,memo);
    }
};