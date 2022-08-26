class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = INT_MAX;
        int maxprofit = 0;
        for(int i=0; i<n; i++)
        {
            mn = min(mn, prices[i]);
            maxprofit = max(maxprofit, prices[i]-mn);
        }
        return maxprofit;
    }
};