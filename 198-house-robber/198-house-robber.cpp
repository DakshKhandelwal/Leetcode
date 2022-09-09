class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        int prev2 =0;
        int prev =nums[0];
        int curi;
        for(int i=1; i<n; i++)
        {        
            int t1 = nums[i];
            if(i>1) t1 += prev2;

            int t2 = 0 + prev;

            curi = max(t1,t2);
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
};