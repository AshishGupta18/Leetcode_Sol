class Solution {
public:
    int solve(int n, vector<int>& cost, vector<int>& dp) {
        // if (n == 1 ) {
        //     return cost[n-1];
        // }
        if(n==0){
            return cost[0];
        }
         if(n<0){
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = max(cost[n] + solve(n - 2, cost, dp), solve(n-1 , cost, dp));
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n , -1);
        return solve(n-1, nums, dp);
    }
};