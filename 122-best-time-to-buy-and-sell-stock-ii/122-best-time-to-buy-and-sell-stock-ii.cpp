class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        for(int i=1; i<prices.size(); i++)
        {
            maxprofit += max((prices[i] - prices[i-1]), 0);
        }
        return maxprofit;
    }
};