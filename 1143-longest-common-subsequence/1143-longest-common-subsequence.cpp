// int dp[1001][1001];

// int LCS(string s1, string s2, int n, int m)
// {
//     if(n==0 || m==0)
//         return 0;
    
//     if(dp[n][m]!=-1)
//         return dp[n][m];
    
//     if(s1[n-1] == s2[m-1])
//         return dp[n][m] = 1 + LCS(s1,s2,n-1,m-1);
    
//     else
//         return dp[n][m] = max(LCS(s1,s2,n, m-1), LCS(s1,s2,n-1,m));
// }

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        // memset(dp,-1,sizeof(dp));
        // return LCS(text1, text2, m, n);
        
        int dp[m+1][n+1];
        for(int i=0; i<m+1; i++)
        {
            for(int j=0; j<n+1; j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }
        
        for(int i=1; i<m+1; i++)
        {
            for(int j=1; j<n+1; j++)
            {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = 1+ dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};