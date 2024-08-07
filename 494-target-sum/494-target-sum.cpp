int countSubset(vector<int> arr, int sum)
{
    int n=arr.size();
    int dp[n+1][sum+1];
    
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<sum+1; j++)
        {
            if(i==0)
                dp[i][j]=0;
            
            if(j==0)
                dp[i][j]=1;
        }
    }
    
    for(int i=1; i<n+1; i++)
    {
        for(int j=0; j<sum+1; j++)
        {
            if(arr[i-1]<=j)
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum=0;
        for(int i=0; i<n; i++)
            sum+=nums[i];
        
        if(abs(target)>sum || (sum+target)%2!=0)
            return 0;
        
        int temp = (sum+target)/2;
        return countSubset(nums,temp);
    }
};