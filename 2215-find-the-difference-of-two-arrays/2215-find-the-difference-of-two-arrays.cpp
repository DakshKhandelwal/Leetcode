class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1 (nums1.begin(), nums1.end());
        unordered_set<int> s2 (nums2.begin(), nums2.end());
        vector<vector<int>> v;
        vector<int> v1;
        
        for(auto val: s1)
        {
            if(s2.find(val) == s2.end())
            {
                v1.push_back(val);
            }
        }
        v.push_back(v1);
        v1.clear();
        
        for(auto val: s2)
        {
            if(s1.find(val) == s1.end())
            {
                v1.push_back(val);
            }
        }
        v.push_back(v1);
        return v;
    }
};