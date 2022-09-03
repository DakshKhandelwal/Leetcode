// bool solve(int i, int j, string s, string p, vector<vector<int>> &dp)
// {
//     if(i<0 && j<0)
//         return true;
//     if(j<0 && i>=0)
//         return false;
//     if(i<0 && j>=0)
//     {
//         for(int ii=0; ii<=j; ii++)
//         {
//             if(p[ii]!='*')
//                 return false;
//         }
//         return true;
//     }
    
//     if(dp[i][j]!=-1)
//         return dp[i][j];
    
//     if(s[i]==p[j] || p[j]=='?')
//         return dp[i][j] = solve(i-1, j-1, s, p, dp);
    
//     if(p[j]=='*')
//     {
//         return dp[i][j] = solve(i-1, j, s, p, dp) || solve(i, j-1, s,p, dp) ;
//     }
    
//     return dp[i][j] = false;
// }

// class Solution {
// public:
//     bool isMatch(string s, string p) {
        
//         int i = s.length()-1;
//         int j = p.length()-1;
//         vector<vector<int>> dp(i+1, vector<int>(j+1,-1));
//         return solve(i,j,s,p ,dp);
//     }
// };

class Solution {
 public:
    
     bool isMatch(string s, string p) {
         int n=s.length();
         int m=p.length();
//          vector<vector<bool>> dp(n+1, vector<bool>(m+1, false));
         
//          for(int i=0; i<n+1; i++)
//          {
//              for(int j=0; j<m+1; j++)
//              {
//                  if(i==0 && j==0)
//                      dp[i][j] = true;
                 
//                  if(j==0 && i>0)
//                      dp[i][j] =false;
                 
//                  if(i==0 && j>0)
//                  {
//                      bool flag = true;
//                      for(int k=0; k<j; k++)
//                      {
//                          if(p[k]!='*')
//                          {
//                              flag = false;
//                              break;
//                          }
//                      }
//                      dp[i][j]= flag;
//                  }
//              }
//          }
         
//          for(int i=1; i<n+1; i++)
//          {
//              for(int j=1; j<m+1; j++)
//              {
//                  if(s[i-1]==p[j-1] || p[j-1]=='?')
//                      dp[i][j] = dp[i-1][j-1];
                 
//                  else if(p[j-1]=='*')
//                      dp[i][j] = dp[i-1][j] || dp[i][j-1];
                 
//                  else 
//                      dp[i][j] = false;
//              }
//          }
//          return dp[n][m];
         
         vector<bool> dp(m+1, false);
         dp[0]=true;
        vector<bool> temp(m+1,false);
         for(int j=1;j<=m;j++){
            int flag=0;
            for(int x=0;x<j;x++){
                if(p[x]!='*')flag++;
            }
            if(flag==0)dp[j]=1;
        }
         for(int i=1; i<n+1; i++)
         {
            /* vector<bool>temp(m+1, false);
             bool flag=true;
             for(int k=1;k<=i;k++)
             {
                 if(p[k-1]!='*')
                 {
                     flag=false;
                     break;
                 }
             }
             temp[0]=flag;*/
             for(int j=1; j<m+1; j++)
             {
                 if(s[i-1]==p[j-1] || p[j-1]=='?')
                     temp[j] = dp[j-1];
                 else if(p[j-1]=='*')
                     temp[j] = dp[j] || temp[j-1];
                 else temp[j]=false;
             }
             dp=temp;
         }
         return dp[m];
     }
};