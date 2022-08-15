class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(int row=0; row<nums.size(); row++)
        {
            for(int col=0; col<nums[row].size(); col++)
            {
                mp[nums[row][col]]++;
            }
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second == nums.size())
                v.push_back(it->first);
        }
        return v;
    }
};