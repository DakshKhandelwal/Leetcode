class Solution {
public:
    
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> count;
        unordered_map<int,int> first;
        
        int degree=0, res=0;
        
        for(int i=0; i<n; i++)
        {
            if(first.count(nums[i]) == 0)
                first[nums[i]] = i;
            
            if(++count[nums[i]] > degree)
            {
                degree = count[nums[i]];
                res = i - first[nums[i]] + 1;
            }
            else if(count[nums[i]] == degree)
                res = min(res, i - first[nums[i]] + 1);
        }
        return res;
    }
};