class Solution {
private:
    int f(int n, vector<int> &dp)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        
        if(dp[n]!= -1) return dp[n];
        return f(n-1, dp)+f(n-2, dp);
    }
    
public:
    int fib(int n) { 
        vector<int> dp(n+1, -1);
        return f(n,dp);
    }
};