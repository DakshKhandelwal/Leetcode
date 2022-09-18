class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        unordered_map<int,int>mp;
        
        for(int i=0; i<n; i++)
        {
            int b = target - nums[i];
            if(mp.find(b)!=mp.end())
            {
                v.push_back(mp[b]);
                v.push_back(i);
            }
            mp.insert({nums[i], i});
        }
        return v;
    }
};