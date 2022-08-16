class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cursum=0;
        int max=INT_MIN;
        for(int i=0; i<n; i++)
        {
            cursum+=nums[i];
            if(cursum>max)
                max=cursum;
            
            if(cursum<0)
                cursum=0;
        }
        return max;
    }
};