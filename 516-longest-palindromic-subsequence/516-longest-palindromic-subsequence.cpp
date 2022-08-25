class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int m=s.length();
        string str =s;
        reverse(str.begin(), str.end());
        
        int dp[m+1][m+1];
        for(int i=0; i<m+1; i++)
        {
            for(int j=0; j<m+1; j++)
            {
                if(i==0 || j==0)
                    dp[i][j] =0;
            }
        }
        
        for(int i=1; i<m+1; i++)
        {
            for(int j=1; j<m+1; j++)
            {
                if(s[i-1]==str[j-1])
                    dp[i][j] =1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        return dp[m][m];
    }
};