class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1, 0);
        int t1, t2;
        dp[0] = nums[0];
        
        for(int i=1; i<n; i++)
        {        
            t1 = nums[i];
            if(i>1) t1+= dp[i-2];

            t2 = 0 + dp[i-1];

            dp[i] = max(t1,t2);
        }
        return dp[n-1];
    }
};