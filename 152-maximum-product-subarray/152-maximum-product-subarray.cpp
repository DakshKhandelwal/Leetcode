class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ma = nums[0];
        int mi = nums[0];
        int ans = nums[0];
        
        for(int i=1; i<n; i++)
        {
            if(nums[i]<0)
                swap(ma,mi);
            
            ma = max(nums[i], ma*nums[i]);
            mi = min(nums[i], mi*nums[i]);
            ans = max(ans, ma);
        }
        return ans;
    }
};