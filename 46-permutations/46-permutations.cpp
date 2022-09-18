void permutation(vector<int>&nums, int start, int end, vector<vector<int>>&ans)
{
    if(start==end)
       ans.push_back(nums);
    
    for(int i=start; i<=end; i++)
    {
        swap(nums[start], nums[i]);
        
        permutation(nums, start+1, end, ans);
        
        swap(nums[start], nums[i]); //backtrack
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        permutation(nums, 0, n-1, ans);
        return ans;
    }
};