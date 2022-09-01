class Solution {
public:
    int superEggDrop(int k, int n) {
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        
        int m=0;
        while(dp[m][k]<n)
        {
            m++;
            for(int i=1; i<=k; i++)
            {
                dp[m][i] = dp[m-1][i-1] + dp[m-1][i] +1;
            }
        }
        return m;
    }
};