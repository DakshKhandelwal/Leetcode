class Solution {
public:
    int max(int a,int b)
    {
        if(a>=b)return a;
        else return b;
    }
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        map<int,vector<int>>mp;
        int freq=0;
        
        for(int i=0; i<n; i++)
            //mp[nums[i]]++;
        {
            mp[nums[i]].push_back(i);
            freq=max(freq,mp[nums[i]].size());
        }
        
        int mn=INT_MAX;
        for(auto val: mp)
        {   
            if(val.second.size()==freq)
            {
                vector<int> v = val.second;

                 mn=min(mn,v.back()-v[0]+1);
            }   
            
        }
        return mn;
    }
};