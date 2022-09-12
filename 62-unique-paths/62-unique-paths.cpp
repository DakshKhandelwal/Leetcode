class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = n-1;
        double ans =1;
        for(int i=1; i<=r; i++) // N C r
            ans = ans * (N-r+i)/i;
        
        return (int)ans;
        
//         int dp[m+1][n+1];
//         for(int i=1; i<m+1; i++)
//         {
//             for(int j=1; j<n+1; j++)
//             {
//                 if(i==1 || j==1)
//                     dp[i][j] = 1;
//             }
//         }
        
//         for(int i=2; i<m+1; i++)
//         {
//             for(int j=2; j<n+1; j++)
//             {
//                 dp[i][j] = dp[i-1][j] + dp[i][j-1];
//             }
//         }
//         return dp[m][n];
    }
};