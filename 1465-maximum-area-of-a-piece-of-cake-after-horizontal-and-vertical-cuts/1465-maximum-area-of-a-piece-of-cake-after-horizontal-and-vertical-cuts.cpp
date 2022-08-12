class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        int mod = 1e9+7;
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        horizontalCuts.push_back(0);
        verticalCuts.push_back(0);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int n1 = horizontalCuts.size();
        int n2 = verticalCuts.size();
        long long m1 = -1;
        long long m2 = -1;
        
        
        for(int i=0; i<n1-1; i++)
        {
            long long temp1 = horizontalCuts[i+1] - horizontalCuts[i];
            m1 = max(m1,temp1);
        }
        
        for(int i=0; i<n2-1; i++)
        {
            long long temp2 = verticalCuts[i+1] - verticalCuts[i];
            m2 = max(m2,temp2);
        }
        
        return ((m1*m2) % mod);
    }
};